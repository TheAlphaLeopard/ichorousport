// gml_Script_multiply_anon_8036_vec3_Vect2 @ 0x14063c6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_multiply_anon_8036_vec3_Vect2
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar15;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 *local_178;
  undefined8 *puStack_170;
  double local_168;
  uint local_15c;
  undefined8 *local_158;
  uint uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 *local_100;
  undefined4 local_f4;
  undefined8 *local_f0;
  undefined4 local_e4;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  double local_c8;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  
  local_120 = "gml_Script_vec2";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 1;
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_14c = 0xffffff;
  ppuVar9 = (undefined8 **)0x0;
  local_158 = (undefined8 *)0x0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_9c = 0xffffff;
  local_a8 = (undefined8 *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = (undefined8 *)0x0;
  local_e4 = 0xffffff;
  local_f0 = (undefined8 *)0x0;
  local_f4 = 0xffffff;
  local_100 = (undefined8 *)0x0;
  local_13c = 0;
  uVar11 = 0;
  uVar12 = 0;
  local_148 = 0;
  local_104 = 0;
  local_110 = 0;
  local_bc = 0;
  local_c8 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0f6c) &&
     (_Init_thread_header(&DAT_141de0f6c), DAT_141de0f6c == -1)) {
    DAT_141de0f70 = (longlong *)FUN_140e63aa0(DAT_141a00978);
    _Init_thread_footer(&DAT_141de0f6c);
  }
  if (DAT_141ddc1a8 == '\0') {
    FUN_140e64380(DAT_141de0f70,"gml_Script_vec2");
    FUN_140e64380(param_1,"gml_Script_vec2");
  }
  FUN_140e643a0(param_1,DAT_141de0f70);
  local_118 = 0x2d;
  if (DAT_141ddc1a8 == '\0') {
    DAT_141ddc1a8 = '\x01';
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00838);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_add_anon_1329_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_1419f4aa8);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_divide_anon_1801_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00938);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_modulo_anon_2039_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00848);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_length_squared_anon_2367_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00888);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_length_anon_2513_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a008f8);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_normalize_anon_2672_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_1419f6348);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_is_normalized_anon_3041_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00988);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_inverse_anon_3205_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a009f8);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_dot_anon_3359_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00908);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_dot_normalized_anon_3574_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00a48);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_distance_to_anon_3819_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00958);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_angle_to_anon_4114_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00808);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_lerp_to_anon_4331_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00928);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_reflect_anon_4607_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a009d8);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_clamp_to_anon_4956_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a009a8);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_vec_abs_anon_5200_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a009c8);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_vec_floor_anon_5322_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00a08);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_vec_ceil_anon_5447_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a007f8);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_vec_sign_anon_5573_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00718);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_vec_round_anon_5700_vec2_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a009e8);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script_vec2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141de0f70 + 0x10))(DAT_141de0f70,DAT_141a00a28);
    FUN_140e609c0(DAT_141de0f70);
    FUN_140e645a0(&local_188,gml_Script___UpdateVec2Status_anon_7710_vec3_Vect2,0);
    if (&local_188 != ppuVar5) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_178 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
  }
  local_118 = 5;
  ppuVar5 = (undefined8 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00a38);
  uStack_17c = 0xd;
  local_188 = (undefined8 *)0x0;
  if (&local_188 != ppuVar5) {
    puStack_170 = (undefined8 *)CONCAT44(0xd,uStack_180);
    local_178 = (undefined8 *)0x0;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar5);
    }
    FUN_140041b80(ppuVar5,&local_178);
  }
  local_118 = 10;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_178 = _DAT_1419e6d50;
  puStack_170 = (undefined8 *)uRam00000001419e6d58;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_178);
  local_e0 = &local_98;
  local_178 = _DAT_141dc6780;
  puStack_170 = puRam0000000141dc6788;
  if ((1 << ((byte)_local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_178);
  local_d8 = &local_88;
  uVar7 = CONCAT44(uVar15,DAT_1419fd218);
  ppuVar5 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_148,2,uVar7,&local_e0);
  if (ppuVar5 != &local_158) {
    local_178 = *ppuVar5;
    puStack_170 = ppuVar5[1];
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
  }
  local_118 = 0xb;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_168 = 0.0;
  bVar1 = true;
  puVar10 = &DAT_1419df7b0;
  do {
    if (!bVar1) {
      local_118 = 0xb;
      uVar3 = local_15c & 0xffffff;
      if (uVar3 == 0) {
LAB_14063d70c:
        local_168 = (double)CONCAT44(uVar12,uVar11) + 1.0;
      }
      else if (uVar3 == 1) {
        local_168 = (double)FUN_140e4b060(&local_168);
        local_168 = local_168 + 1.0;
        local_15c = 0;
      }
      else if (uVar3 == 7) {
        local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_168 = (double)((longlong)local_168 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_15c = 0;
          goto LAB_14063d70c;
        }
        FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
      }
    }
    bVar1 = false;
    iVar4 = FUN_140e851f0(&local_168,&local_c8,DAT_141955260,1);
    uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((iVar4 == -2) || (-1 < iVar4)) break;
    local_118 = 0xd;
    iVar4 = FUN_140e4a740(&local_168);
    if (iVar4 < param_4) {
      puVar8 = (undefined8 *)param_5[iVar4];
    }
    else {
      puVar8 = &DAT_1419df7b0;
    }
    uVar11 = FUN_140e4a740(&local_168);
    puVar6 = (undefined8 *)FUN_140e48e40(&local_158,uVar11);
    FUN_140e609c0(*local_158);
    if (puVar8 != puVar6) {
      local_178 = (undefined8 *)*puVar8;
      puStack_170 = (undefined8 *)puVar8[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_178);
    }
    FUN_140e60910(1);
    uVar11 = SUB84(local_168,0);
    uVar12 = (undefined4)((ulonglong)local_168 >> 0x20);
  } while( true );
  local_118 = 0x13;
  if ((param_4 < 1) || (puVar10 = (undefined8 *)*param_5, puVar10 != &local_138)) {
    local_178 = (undefined8 *)*puVar10;
    puStack_170 = (undefined8 *)puVar10[1];
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
  }
  local_118 = 0x14;
  uStack_17c = 0;
  local_188 = (undefined8 *)0x3ff0000000000000;
  iVar4 = FUN_140e851f0(&local_c8,&local_188,DAT_141955260,0);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar4 == 0) {
    local_118 = 0x16;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_e0 = &local_138;
    uVar13 = CONCAT44(uVar11,DAT_1419fcb88);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar13,&local_e0);
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 == '\0') {
      local_118 = 0x1c;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      local_e0 = &local_138;
      local_d8 = &local_138;
      ppuVar5 = &local_e0;
      puVar10 = &local_148;
    }
    else {
      local_118 = 0x18;
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      local_110 = 0;
      local_108 = 0;
      local_104 = 5;
      FUN_140e87170(&local_138,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
      plVar14 = param_1;
      FUN_140e87170(&local_138,DAT_1419fe158,0x80000000,&local_b8,param_1,param_2);
      uVar11 = (undefined4)((ulonglong)plVar14 >> 0x20);
      puStack_170 = (undefined8 *)CONCAT44(uStack_9c,uStack_a0);
      local_178 = local_a8;
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_178);
      local_d8 = &local_88;
      puStack_170 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
      local_178 = local_b8;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_178);
      local_d0 = local_78;
      ppuVar5 = &local_d8;
      puVar10 = &local_110;
    }
    ppuVar5 = (undefined8 **)
              FUN_140e634e0(param_1,param_2,puVar10,2,CONCAT44(uVar11,DAT_1419fdca8),ppuVar5);
    if (ppuVar5 != &local_158) {
      local_178 = *ppuVar5;
      puStack_170 = ppuVar5[1];
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_178);
    }
  }
  local_118 = 0x23;
  ppuVar5 = (undefined8 **)0x0;
  if (((uStack_14c & 0xffffff) == 2) && (local_158 != (undefined8 *)0x0)) {
    if (*(int *)((longlong)local_158 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
    }
    else {
      ppuVar5 = (undefined8 **)local_158[1];
    }
    if (ppuVar5 != &local_f0) goto LAB_14063db12;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    ppuVar5 = &local_158;
LAB_14063db12:
    local_178 = *ppuVar5;
    puStack_170 = ppuVar5[1];
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_178);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_f0);
  local_118 = 0x24;
  if (((uStack_14c & 0xffffff) == 2) && (local_158 != (undefined8 *)0x0)) {
    if (*(int *)((longlong)local_158 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
    }
    else {
      ppuVar9 = (undefined8 **)(local_158[1] + 0x10);
    }
    if (ppuVar9 == &local_100) goto LAB_14063dbe3;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    ppuVar9 = &local_158;
  }
  local_178 = *ppuVar9;
  puStack_170 = ppuVar9[1];
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  FUN_140041b80(&local_100,&local_178);
LAB_14063dbe3:
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_100);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

