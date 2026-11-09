// gml_Script_wall_escape @ 0x140645d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_wall_escape
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong **pplVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong *local_1d8;
  undefined8 *puStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 *local_1b8;
  uint uStack_1ac;
  double local_1a8;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 *local_f8;
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined4 local_dc;
  double local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  
  local_180 = "gml_Script_vec3";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 200;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_168,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_1ac = 0xffffff;
  local_1b8 = (undefined8 *)0x0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = (undefined8 *)0x0;
  local_ec = 0xffffff;
  local_f8 = (undefined8 *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  local_1bc = 0;
  local_1c8 = 0;
  local_fc = 0;
  local_108 = 0;
  local_cc = 0;
  local_d8 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0f68) &&
     (_Init_thread_header(&DAT_141de0f68), DAT_141de0f68 == -1)) {
    DAT_141de0f60 = (longlong *)FUN_140e63aa0(DAT_141a00788);
    _Init_thread_footer(&DAT_141de0f68);
  }
  if (DAT_141ddc1a9 == '\0') {
    FUN_140e64380(DAT_141de0f60,"gml_Script_vec3");
    FUN_140e64380(param_1,"gml_Script_vec3");
  }
  FUN_140e643a0(param_1,DAT_141de0f60);
  local_178 = 0x103;
  if (DAT_141ddc1a9 == '\0') {
    DAT_141ddc1a9 = '\x01';
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a008d8);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_add_anon_8332_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00838);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_subtract_anon_8633_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_1419f4aa8);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_divide_anon_8932_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00938);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_modulo_anon_9234_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00848);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_length_squared_anon_9626_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00888);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_length_anon_9776_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a008f8);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_normalize_anon_9935_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_1419f6348);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_is_normalized_anon_10348_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00988);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_inverse_anon_10512_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a009f8);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_cross_anon_10666_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00908);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_dot_anon_11000_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a007a8);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_dot_normalized_anon_11224_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00a48);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_distance_to_anon_11478_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00958);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_angle_to_anon_11816_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00808);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_lerp_to_anon_12037_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00928);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_reflect_anon_12388_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a009d8);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_clamp_to_anon_12780_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a009a8);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_vec_abs_anon_13063_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a009c8);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_vec_floor_anon_13192_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00a08);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_vec_ceil_anon_13326_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a007f8);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_vec_sign_anon_13460_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00718);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_vec_round_anon_13595_vec3_Vect2,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a009e8);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_Script_vec3,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
    pplVar6 = (longlong **)(**(code **)(*DAT_141de0f60 + 0x10))(DAT_141de0f60,DAT_141a00a28);
    FUN_140e609c0(DAT_141de0f60);
    FUN_140e645a0(&local_1e8,gml_GlobalScript_wall_escape,0);
    if (&local_1e8 != pplVar6) {
      puStack_1d0 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
      local_1d8 = local_1e8;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1d8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e60910(1);
  }
  local_178 = 0xcc;
  pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00a38);
  uStack_1dc = 0xd;
  local_1e8 = (longlong *)0x3ff0000000000000;
  if (&local_1e8 != pplVar6) {
    puStack_1d0 = (undefined8 *)CONCAT44(0xd,uStack_1e0);
    local_1d8 = (longlong *)0x3ff0000000000000;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_1d8);
  }
  local_178 = 0xd0;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_1d8 = _DAT_1419e6d60;
  puStack_1d0 = (undefined8 *)uRam00000001419e6d68;
  if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1d8);
  local_128 = &local_168;
  local_1d8 = _DAT_141dc6780;
  puStack_1d0 = puRam0000000141dc6788;
  if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1d8);
  local_120 = &local_158;
  uVar9 = CONCAT44(uVar5,DAT_1419fd218);
  ppuVar7 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar9,&local_128);
  if (ppuVar7 != &local_1b8) {
    local_1d8 = *ppuVar7;
    puStack_1d0 = ppuVar7[1];
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1d8);
  }
  local_178 = 0xd1;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_1a8 = 0.0;
  bVar1 = true;
  puVar14 = &DAT_1419df7b0;
  do {
    if (!bVar1) {
      local_178 = 0xd1;
      uVar3 = local_19c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_1a8 = (double)((longlong)local_1a8 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_140646ec6;
            FUN_140042910(&DAT_14172c3d8,&local_1a8,&local_1a8);
          }
          goto LAB_140646ed8;
        }
        local_1a8 = (double)FUN_140e4b060(&local_1a8);
LAB_140646ec6:
        local_19c = 0;
      }
      local_1a8 = local_1a8 + 1.0;
    }
LAB_140646ed8:
    bVar1 = false;
    iVar4 = FUN_140e851f0(&local_1a8,&local_d8,DAT_141955260,1);
    uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if ((iVar4 == -2) || (-1 < iVar4)) break;
    local_178 = 0xd3;
    iVar4 = FUN_140e4a740(&local_1a8);
    if (iVar4 < param_4) {
      puVar13 = (undefined8 *)param_5[iVar4];
    }
    else {
      puVar13 = &DAT_1419df7b0;
    }
    uVar5 = FUN_140e4a740(&local_1a8);
    puVar8 = (undefined8 *)FUN_140e48e40(&local_1b8,uVar5);
    FUN_140e609c0(*local_1b8);
    if (puVar13 != puVar8) {
      local_1d8 = (longlong *)*puVar13;
      puStack_1d0 = (undefined8 *)puVar13[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_1d8);
    }
    FUN_140e60910(1);
  } while( true );
  local_178 = 0xd9;
  if (param_4 < 1) {
    puVar13 = &DAT_1419df7b0;
LAB_140646fb1:
    local_1d8 = (longlong *)*puVar13;
    puStack_1d0 = (undefined8 *)puVar13[1];
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1d8);
  }
  else {
    puVar13 = (undefined8 *)*param_5;
    if (puVar13 != &local_198) goto LAB_140646fb1;
  }
  local_178 = 0xda;
  uStack_1dc = 0;
  local_1e8 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(&local_d8,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uVar3 = 1 << ((byte)local_1bc & 0x1f);
  if (iVar4 < 1) {
    local_178 = 0xf6;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_1d8 = _DAT_141dd4fd8;
    puStack_1d0 = puRam0000000141dd4fe0;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1d8);
    local_128 = &local_168;
    ppuVar7 = &local_128;
    uVar12 = CONCAT44(uVar5,DAT_141a03478);
    FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar12,ppuVar7);
  }
  else {
    local_178 = 0xdc;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_128 = &local_198;
    ppuVar7 = &local_128;
    uVar12 = CONCAT44(uVar5,DAT_1419fcb88);
    uVar9 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar12,ppuVar7);
    cVar2 = FUN_140e491e0(uVar9);
    if (cVar2 == '\0') {
      local_178 = 0xee;
      uStack_1dc = 0;
      local_1e8 = (longlong *)0x3ff0000000000000;
      iVar4 = FUN_140e851f0(&local_d8,&local_1e8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if (iVar4 != 0) goto LAB_1406472ae;
      local_178 = 0xf0;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      uVar5 = (undefined4)(uVar12 >> 0x20);
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      local_128 = &local_198;
      local_120 = &local_198;
      local_118 = &local_198;
      ppuVar7 = &local_128;
      puVar14 = &local_1c8;
    }
    else {
      local_178 = 0xde;
      FUN_140e87440(&local_198,DAT_141a00a38,0x80000000,&local_78,uVar12 & 0xffffffffffffff00,
                    (ulonglong)ppuVar7 & 0xffffffffffffff00);
      cVar2 = FUN_140e491e0(&local_78);
      if (cVar2 == '\0') {
        local_178 = 0xe4;
        uStack_1dc = 0;
        local_1e8 = (longlong *)0x4000000000000000;
        iVar4 = FUN_140e851f0(&local_d8,&local_1e8,DAT_141955260,1);
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        if (iVar4 != -2 && iVar4 < 0) {
          local_178 = 0xe6;
          FUN_140e59370(&local_1d8,&DAT_141dd4fc8);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_1d8,(ThrowInfo *)&DAT_141951a48);
        }
        local_178 = 0xe9;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        FUN_140e87170(&local_198,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
        plVar16 = param_1;
        FUN_140e87170(&local_198,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
        uVar5 = (undefined4)((ulonglong)plVar16 >> 0x20);
        puStack_1d0 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
        local_1d8 = local_98;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1d8);
        local_128 = &local_168;
        puStack_1d0 = (undefined8 *)CONCAT44(uStack_9c,uStack_a0);
        local_1d8 = local_a8;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_1d8);
        local_120 = &local_158;
        if ((param_4 < 2) || (puVar14 = (undefined8 *)param_5[1], puVar14 != &local_148)) {
          local_1d8 = (longlong *)*puVar14;
          puStack_1d0 = (undefined8 *)puVar14[1];
          if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_1d8);
        }
        local_118 = &local_148;
        ppuVar7 = &local_128;
        puVar14 = &local_1c8;
      }
      else {
        local_178 = 0xe0;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        FUN_140e87170(&local_198,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
        plVar16 = param_1;
        uVar12 = param_2;
        FUN_140e87170(&local_198,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
        uVar15 = (ulonglong)plVar16 & 0xffffffffffffff00;
        FUN_140e87440(&local_198,DAT_141a05ca8,0x80000000,&local_88,uVar15,
                      uVar12 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar15 >> 0x20);
        puStack_1d0 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
        local_1d8 = local_98;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_1d8);
        local_120 = &local_158;
        puStack_1d0 = (undefined8 *)CONCAT44(uStack_9c,uStack_a0);
        local_1d8 = local_a8;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_1d8);
        local_118 = &local_148;
        puStack_1d0 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
        local_1d8 = local_88;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_1d8);
        local_110 = local_138;
        ppuVar7 = &local_120;
        puVar14 = &local_108;
      }
    }
    uVar12 = CONCAT44(uVar5,DAT_1419fdca8);
    ppuVar10 = (undefined8 **)FUN_140e634e0(param_1,param_2,puVar14,3,uVar12,ppuVar7);
    if (ppuVar10 != &local_1b8) {
      local_1d8 = *ppuVar10;
      puStack_1d0 = ppuVar10[1];
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_1d8);
    }
  }
LAB_1406472ae:
  local_178 = 0xfc;
  ppuVar10 = (undefined8 **)0x0;
  if (((uStack_1ac & 0xffffff) == 2) && (local_1b8 != (undefined8 *)0x0)) {
    if (*(int *)((longlong)local_1b8 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
    }
    else {
      ppuVar10 = (undefined8 **)local_1b8[1];
    }
    if (ppuVar10 != &local_e8) goto LAB_140647606;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    ppuVar10 = &local_1b8;
LAB_140647606:
    local_1d8 = *ppuVar10;
    puStack_1d0 = ppuVar10[1];
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1d8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_e8);
  local_178 = 0xfd;
  ppuVar10 = (undefined8 **)0x0;
  if (((uStack_1ac & 0xffffff) == 2) && (local_1b8 != (undefined8 *)0x0)) {
    if (*(int *)((longlong)local_1b8 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
    }
    else {
      ppuVar10 = (undefined8 **)(local_1b8[1] + 0x10);
    }
    if (ppuVar10 == &local_f8) goto LAB_1406476d8;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    ppuVar10 = &local_1b8;
  }
  local_1d8 = *ppuVar10;
  puStack_1d0 = ppuVar10[1];
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_1d8);
LAB_1406476d8:
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_f8);
  local_178 = 0xfe;
  ppuVar11 = (undefined8 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05ca8);
  FUN_140e609c0(param_1);
  ppuVar10 = (undefined8 **)0x0;
  if (((uStack_1ac & 0xffffff) == 2) && (local_1b8 != (undefined8 *)0x0)) {
    if (*(int *)((longlong)local_1b8 + 0x24) < 3) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
    }
    else {
      ppuVar10 = (undefined8 **)(local_1b8[1] + 0x20);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    ppuVar10 = &local_1b8;
  }
  if (ppuVar10 != ppuVar11) {
    local_1d8 = *ppuVar10;
    puStack_1d0 = ppuVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar11);
    }
    FUN_140041b80(ppuVar11,&local_1d8);
  }
  FUN_140e60910(1);
  local_178 = 0x100;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar14 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00738);
  uStack_1dc = 6;
  uVar15 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_b8,uVar12,uVar15);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_c8,uVar12,uVar15 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uVar3 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uVar3 == 0xf) {
    uVar12 = 0x4000004;
  }
  else {
    uVar12 = (ulonglong)(uVar3 | 0x1000000);
  }
  uStack_1dc = 0xf;
  local_1e8 = (longlong *)(uVar12 << 0x20 | (ulonglong)(DAT_141a00978 & 0xffffff));
  puStack_1d0 = (undefined8 *)CONCAT44(0xf,uStack_1e0);
  local_1d8 = local_1e8;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1d8);
  local_128 = &local_168;
  puStack_1d0 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
  local_1d8 = local_b8;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1d8);
  local_120 = &local_158;
  puStack_1d0 = (undefined8 *)CONCAT44(uStack_bc,uStack_c0);
  local_1d8 = local_c8;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_1d8);
  local_118 = &local_148;
  FUN_140e609c0(param_1);
  ppuVar7 = &local_128;
  uVar12 = CONCAT44(uVar5,DAT_1419fd6d8);
  puVar13 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,3,uVar12,ppuVar7);
  if (puVar13 != puVar14) {
    local_1d8 = (longlong *)*puVar13;
    puStack_1d0 = (undefined8 *)puVar13[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar14);
    }
    FUN_140041b80(puVar14,&local_1d8);
  }
  FUN_140e60910(1);
  local_178 = 0x101;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar14 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00858);
  uStack_1dc = 6;
  uVar15 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_c8,uVar12,uVar15);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_b8,uVar12,uVar15 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uVar3 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uVar3 == 0xf) {
    uVar12 = 0x4000004;
  }
  else {
    uVar12 = (ulonglong)(uVar3 | 0x1000000);
  }
  uStack_1dc = 0xf;
  local_1e8 = (longlong *)(uVar12 << 0x20 | (ulonglong)(DAT_141a00978 & 0xffffff));
  puStack_1d0 = (undefined8 *)CONCAT44(0xf,uStack_1e0);
  local_1d8 = local_1e8;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1d8);
  local_128 = &local_168;
  puStack_1d0 = (undefined8 *)CONCAT44(uStack_bc,uStack_c0);
  local_1d8 = local_c8;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1d8);
  local_120 = &local_158;
  puStack_1d0 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
  local_1d8 = local_b8;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_1d8);
  local_118 = &local_148;
  FUN_140e609c0(param_1);
  puVar13 = (undefined8 *)
            FUN_140e634e0(param_1,param_2,&local_1c8,3,CONCAT44(uVar5,DAT_1419fd6d8),&local_128);
  if (puVar13 != puVar14) {
    local_1d8 = (longlong *)*puVar13;
    puStack_1d0 = (undefined8 *)puVar13[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar14 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar14);
    }
    FUN_140041b80(puVar14,&local_1d8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

