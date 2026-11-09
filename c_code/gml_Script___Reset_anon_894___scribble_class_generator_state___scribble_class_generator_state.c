// gml_Script___Reset_anon_894___scribble_class_generator_state___scribble_class_generator_state @ 0x140147330

undefined8 *
gml_Script___Reset_anon_894___scribble_class_generator_state___scribble_class_generator_state
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  longlong *local_b8;
  undefined4 local_ac;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong **local_68;
  undefined1 *local_50 [3];
  
  local_110 = "gml_Script___scribble_class_font";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 9;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_12c = 0;
  local_138 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcf14) &&
     (_Init_thread_header(&DAT_141ddcf14), DAT_141ddcf14 == -1)) {
    DAT_141ddcf18 = (longlong *)FUN_140e63aa0(DAT_141a06218);
    _Init_thread_footer(&DAT_141ddcf14);
  }
  if (DAT_141ddc07f == '\0') {
    FUN_140e64380(DAT_141ddcf18,"gml_Script___scribble_class_font");
    FUN_140e64380(param_1,"gml_Script___scribble_class_font");
  }
  FUN_140e643a0(param_1,DAT_141ddcf18);
  local_108 = 0x19;
  if (DAT_141ddc07f == '\0') {
    DAT_141ddc07f = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddcf18 + 0x10))(DAT_141ddcf18,DAT_141a06458);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_158 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_158);
    local_50[0] = local_88;
    ppuVar10 = local_50;
    uVar6 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_138,1,ppuVar10);
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a06198,0x80000000,&local_f8,uVar11,
                  in_stack_fffffffffffffe80 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141ddcf18);
    if (&local_f8 != puVar5) {
      local_158 = local_f8;
      uStack_150 = uStack_f0;
      uStack_14c = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_158);
    }
    FUN_140e60910(1);
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddcf18 + 0x10))(DAT_141ddcf18,DAT_141a06378);
    FUN_140e609c0(DAT_141ddcf18);
    FUN_140e645a0(&local_148,
                  gml_Script___ensure_material_textures_fetched_anon_3155___scribble_class_font___scribble_class_font
                  ,0);
    if (&local_148 != puVar5) {
      local_158 = local_148;
      uStack_150 = uStack_140;
      uStack_14c = uStack_13c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_158);
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e60910(1);
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddcf18 + 0x10))(DAT_141ddcf18,DAT_141a06208);
    FUN_140e609c0(DAT_141ddcf18);
    FUN_140e645a0(&local_148,
                  gml_Script___ensure_texel_data_anon_3911___scribble_class_font___scribble_class_font
                  ,0);
    if (&local_148 != puVar5) {
      local_158 = local_148;
      uStack_150 = uStack_140;
      uStack_14c = uStack_13c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_158);
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e60910(1);
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddcf18 + 0x10))(DAT_141ddcf18,DAT_141a063d8);
    FUN_140e609c0(DAT_141ddcf18);
    FUN_140e645a0(&local_148,
                  gml_Script___destroy_anon_5865___scribble_class_font___scribble_class_font,0);
    if (&local_148 != puVar5) {
      local_158 = local_148;
      uStack_150 = uStack_140;
      uStack_14c = uStack_13c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_158);
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e60910(1);
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddcf18 + 0x10))(DAT_141ddcf18,DAT_141a063b8);
    FUN_140e609c0(DAT_141ddcf18);
    FUN_140e645a0(&local_148,gml_Script___scribble_class_font,0);
    if (&local_148 != puVar5) {
      local_158 = local_148;
      uStack_150 = uStack_140;
      uStack_14c = uStack_13c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_158);
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e60910(1);
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddcf18 + 0x10))(DAT_141ddcf18,DAT_141a06178);
    FUN_140e609c0(DAT_141ddcf18);
    FUN_140e645a0(&local_148,gml_GlobalScript___scribble_class_generator_state,0);
    if (&local_148 != puVar5) {
      local_158 = local_148;
      uStack_150 = uStack_140;
      uStack_14c = uStack_13c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_158);
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e60910(1);
  }
  local_108 = 0xc;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a064f8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  if (puVar7 != puVar5) {
    local_158 = *puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  local_108 = 0xf;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a062b8);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[2];
  }
  if (puVar7 != puVar5) {
    local_158 = *puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  local_108 = 0x14;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06128);
  FUN_140e609c0(param_1);
  if (param_4 < 4) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[3];
  }
  if (puVar7 != puVar5) {
    local_158 = *puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  local_108 = 0x17;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06138);
  FUN_140e609c0(param_1);
  if (param_4 < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[4];
  }
  if (puVar7 != puVar5) {
    local_158 = *puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  local_108 = 0x1a;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141ddcf18 + 8))(DAT_141ddcf18,DAT_141a06458);
  if (puVar5 != &local_d8) {
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_158);
  }
  local_78 = &local_d8;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 == &local_c8) goto LAB_140147ad7;
  }
  local_158 = *puVar5;
  uStack_150 = *(undefined4 *)(puVar5 + 1);
  uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_158);
LAB_140147ad7:
  local_70 = &local_c8;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 6;
  local_b8 = param_1;
  uVar6 = FUN_140e5c910();
  FUN_140e42c10(uVar6,param_1);
  local_68 = &local_b8;
  uVar6 = CONCAT44(uVar12,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_138,3,uVar6,&local_78);
  uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_108 = 0x1c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06328);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
  }
  uVar3 = FUN_140e4a740(puVar7);
  puVar7 = (undefined8 *)FUN_140ea89f0(&local_138,uVar3,0x11);
  if (puVar7 != puVar5) {
    local_158 = *puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  local_108 = 0x1d;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06148);
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar12,DAT_1419ff3e8);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,0,uVar6,0);
  uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar7 != puVar5) {
    local_158 = *puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  local_108 = 0x1e;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a063f8);
  FUN_140e609c0(param_1);
  puVar7 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_138,0,CONCAT44(uVar12,DAT_1419ff3e8),0);
  if (puVar7 != puVar5) {
    local_158 = *puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  local_108 = 0x20;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06388);
  uStack_14c = 0xd;
  local_158 = 0;
  if (&local_158 != puVar5) {
    local_148 = 0;
    uStack_140 = uStack_150;
    uStack_13c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_148);
  }
  local_108 = 0x21;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a062b8);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a063e8);
  uStack_13c = 0;
  local_148 = 0x4000000000000000;
  iVar4 = FUN_140e851f0(uVar6,&local_148,DAT_141955260,0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar4 == 0) {
    uStack_14c = 0xd;
    local_158 = 0x3ff0000000000000;
    puVar7 = &local_158;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    uStack_13c = DAT_1419df7bc;
    uStack_140 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_148 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    }
    else {
      FUN_1400419b0(&local_148,&DAT_1419df7b0);
    }
    puVar7 = &local_148;
    bVar2 = false;
    bVar1 = true;
  }
  uVar12 = uStack_14c;
  FUN_140e609c0(param_1);
  if (puVar7 != puVar5) {
    local_128 = *(undefined4 *)puVar7;
    uStack_124 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_120 = *(undefined4 *)(puVar7 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
  if ((bVar1) && ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_148);
  }
  if ((bVar2) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  FUN_140e60910(1);
  local_108 = 0x23;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06338);
  uStack_14c = 0xd;
  local_158 = 0;
  if (&local_158 != puVar5) {
    local_128 = 0;
    uStack_124 = 0;
    uStack_120 = uStack_150;
    uStack_11c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
  local_108 = 0x24;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06348);
  uStack_14c = 0xd;
  local_158 = 0;
  if (&local_158 != puVar5) {
    local_128 = 0;
    uStack_124 = 0;
    uStack_120 = uStack_150;
    uStack_11c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
  local_108 = 0x25;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06468);
  FUN_140e609c0(param_1);
  if (puVar5 != &DAT_1419df7b0) {
    local_128 = (undefined4)DAT_1419df7b0;
    uStack_124 = DAT_1419df7b0._4_4_;
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
  FUN_140e60910(1);
  local_108 = 0x26;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a061b8);
  FUN_140e609c0(param_1);
  if (puVar5 != &DAT_1419df7b0) {
    local_128 = (undefined4)DAT_1419df7b0;
    uStack_124 = DAT_1419df7b0._4_4_;
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
  FUN_140e60910(1);
  local_108 = 0x28;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a062f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x3ff0000000000000;
  local_108 = 0x29;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe3f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_108 = 0x2b;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a063a8);
  FUN_140e609c0(param_1);
  puVar9 = (undefined4 *)
           FUN_140e8da20(&local_138,param_1,7,&DAT_141dc61b0,&DAT_141dc61b0,&DAT_141dc61b0,
                         &DAT_141dc61b0,&DAT_141dc61b0,&DAT_141dc61b0,&DAT_141dc61b0);
  if (puVar9 != puVar8) {
    local_128 = *puVar9;
    uStack_124 = puVar9[1];
    uStack_120 = puVar9[2];
    uStack_11c = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_128);
  }
  FUN_140e60910(1);
  local_108 = 0x2c;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a061e8);
  FUN_140e609c0(param_1);
  puVar9 = (undefined4 *)
           FUN_140e8da20(&local_e8,param_1,6,&DAT_141dc61b0,&DAT_141dc61b0,&DAT_141dc61b0,
                         &DAT_141dc61b0,&DAT_141dc61b0,&DAT_141dc61b0);
  if (puVar9 != puVar8) {
    local_128 = *puVar9;
    uStack_124 = puVar9[1];
    uStack_120 = puVar9[2];
    uStack_11c = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_128);
  }
  FUN_140e60910(1);
  local_108 = 0x2e;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06318);
  FUN_140e609c0(param_1);
  if (puVar5 != &DAT_1419df7b0) {
    local_128 = (undefined4)DAT_1419df7b0;
    uStack_124 = DAT_1419df7b0._4_4_;
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
  FUN_140e60910(1);
  local_108 = 0x2f;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06428);
  FUN_140e609c0(param_1);
  if (puVar5 != &DAT_1419df7b0) {
    local_128 = (undefined4)DAT_1419df7b0;
    uStack_124 = DAT_1419df7b0._4_4_;
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
  FUN_140e60910(1);
  local_108 = 0x30;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06258);
  FUN_140e609c0(param_1);
  if (puVar5 != &DAT_1419df7b0) {
    local_128 = (undefined4)DAT_1419df7b0;
    uStack_124 = DAT_1419df7b0._4_4_;
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
  FUN_140e60910(1);
  local_108 = 0x31;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a064a8);
  FUN_140e609c0(param_1);
  if (puVar5 != &DAT_1419df7b0) {
    local_128 = (undefined4)DAT_1419df7b0;
    uStack_124 = DAT_1419df7b0._4_4_;
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

