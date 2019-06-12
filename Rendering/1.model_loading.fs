#version 430 core
out vec4 FragColor;

in vec2 TexCoords;

uniform sampler2D texture_diffuse1;

//void main()
//{    
//    FragColor = texture(texture_diffuse1, TexCoords);
	
        //float Pixels = 512.0;
        //float dx = 15.0 * (1.0 / Pixels);
        //float dy = 10.0 * (1.0 / Pixels);
        //vec2 Coord = vec2(dx * floor(TexCoords.x / dx),
                          //dy * floor(TexCoords.y / dy));
        //FragColor = texture(texture_diffuse1, Coord);
//}

float vx_offset = 30.0;
float rt_w = 1920; // GeeXLab built-in
float rt_h = 1080; // GeeXLab built-in
float pixel_w = 15.0;
float pixel_h = 10.0;
void main() 
{ 
  vec2 uv = TexCoords;
  
  vec3 tc = vec3(1.0, 0.0, 0.0);
  if (uv.x < (vx_offset-0.005))
  {
    float dx = pixel_w*(1./rt_w);
    float dy = pixel_h*(1./rt_h);
    vec2 coord = vec2(dx*floor(uv.x/dx), dy*floor(uv.y/dy));
    tc = texture2D(texture_diffuse1, coord).rgb;
  }
  else if (uv.x>=(vx_offset+0.005))
  {
    tc = texture2D(texture_diffuse1, uv).rgb;
  }
	FragColor = vec4(tc, 1.0);
}