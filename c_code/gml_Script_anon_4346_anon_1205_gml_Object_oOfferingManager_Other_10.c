// gml_Script_anon_4346_anon_1205_gml_Object_oOfferingManager_Other_10 @ 0x140b8a210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4346_anon_1205_gml_Object_oOfferingManager_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 **ppuVar10;
  ulonglong in_stack_fffffffffffffe90;
  ulonglong uVar11;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_100 = "gml_Script_anon@2238@anon@1205@gml_Object_oOfferingManager_Other_10";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x67;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_138,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_15c = 0;
  local_168 = 0;
  local_b4 = 0;
  local_c0 = 0;
  local_c4 = 0;
  local_d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x68;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
  uVar11 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f3968,0x80000000,&local_78,uVar11,in_stack_fffffffffffffe90);
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 2) {
    FUN_140e87440(&DAT_1419df7b0,DAT_141a0aa28,0x80000000,&local_148,uVar11 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe90 & 0xffffffffffffff00);
    puVar5 = &DAT_1419df7b0;
  }
  else {
    FUN_140e87440(*(undefined8 *)(param_5 + 8),DAT_141a0aa28,0x80000000,&local_148,
                  uVar11 & 0xffffffffffffff00,in_stack_fffffffffffffe90 & 0xffffffffffffff00);
    puVar5 = *(undefined8 **)(param_5 + 8);
  }
  uVar4 = FUN_140069500(puVar5);
  uVar11 = 0;
  puVar5 = &local_148;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_168,0,puVar5,0);
  iVar3 = FUN_140e851f0(&local_78,uVar4,DAT_141955260,0);
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_d4 = 0xd;
  if (iVar3 == 0) {
    local_e0 = 0x3ff0000000000000;
  }
  else {
    local_e0 = 0;
  }
  local_f8 = 0x69;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = *(undefined8 **)(param_5 + 8);
  }
  uVar11 = uVar11 & 0xffffffffffffff00;
  ppuVar10 = (undefined8 **)((ulonglong)puVar5 & 0xffffffffffffff00);
  FUN_140e87440(puVar7,DAT_141a0ab58,0x80000000,&local_88,ppuVar10,uVar11);
  uStack_14c = 0;
  local_158 = 0;
  iVar3 = FUN_140e851f0(&local_88,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  local_e4 = 0xd;
  if (iVar3 == -2 || 0 < iVar3) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0x3ff0000000000000;
  }
  local_f8 = 0x6b;
  cVar2 = FUN_140e491e0(&local_f0);
  if (cVar2 != '\0') {
    local_f8 = 0x6c;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_158 = CONCAT44(uRam00000001419ec5e4,_DAT_1419ec5e0);
    uStack_150 = uRam00000001419ec5e8;
    uStack_14c = uRam00000001419ec5ec;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
    local_b0 = &local_138;
    local_158 = CONCAT44(uRam00000001419ec604,_DAT_1419ec600);
    uStack_150 = uRam00000001419ec608;
    uStack_14c = uRam00000001419ec60c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_158);
    local_a8 = local_128;
    local_158 = CONCAT44(uRam00000001419ec5d4,_DAT_1419ec5d0);
    uStack_150 = uRam00000001419ec5d8;
    uStack_14c = uRam00000001419ec5dc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_158);
    local_a0 = local_118;
    ppuVar10 = &local_b0;
    gml_Script_imgui_push_style_var(param_1,param_2,&local_168,3,ppuVar10);
  }
  local_f8 = 0x6f;
  cVar2 = FUN_140e491e0(&local_e0);
  if (cVar2 != '\0') {
    local_f8 = 0x70;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_158 = CONCAT44(uRam00000001419ec5e4,_DAT_1419ec5e0);
    uStack_150 = uRam00000001419ec5e8;
    uStack_14c = uRam00000001419ec5ec;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
    local_b0 = &local_138;
    local_158 = CONCAT44(uRam00000001419ec5f4,_DAT_1419ec5f0);
    uStack_150 = uRam00000001419ec5f8;
    uStack_14c = uRam00000001419ec5fc;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_158);
    local_a8 = local_128;
    local_158 = CONCAT44(uRam00000001419ec5d4,_DAT_1419ec5d0);
    uStack_150 = uRam00000001419ec5d8;
    uStack_14c = uRam00000001419ec5dc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_158);
    local_a0 = local_118;
    ppuVar10 = &local_b0;
    gml_Script_imgui_push_style_var(param_1,param_2,&local_168,3,ppuVar10);
  }
  local_f8 = 0x73;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 5;
  if (param_4 < 2) {
    FUN_140e87440(&DAT_1419df7b0,DAT_141a0aa28,0x80000000,&local_148,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
    puVar5 = &DAT_1419df7b0;
  }
  else {
    FUN_140e87440(*(undefined8 *)(param_5 + 8),DAT_141a0aa28,0x80000000,&local_148,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
    puVar5 = *(undefined8 **)(param_5 + 8);
  }
  uVar4 = FUN_140069500(puVar5);
  uVar11 = 0;
  puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_c0,0,&local_148,0);
  if (puVar5 != &local_138) {
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  local_b0 = &local_138;
  ppuVar10 = &local_b0;
  uVar4 = gml_Script_imgui_arrow_button(param_1,param_2,&local_168,1,ppuVar10);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 != '\0') {
    local_f8 = 0x74;
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    if (param_4 < 2) {
      FUN_140e87440(&DAT_1419df7b0,DAT_141a0aa28,0x80000000,&local_148,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
    }
    else {
      FUN_140e87440(*(undefined8 *)(param_5 + 8),DAT_141a0aa28,0x80000000,&local_148,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
      puVar8 = *(undefined8 **)(param_5 + 8);
    }
    uVar6 = FUN_140069500(puVar8);
    puVar8 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_d0,0,&local_148,0);
    uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_150 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
      local_158 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_158,puVar8);
    }
    uVar1 = uStack_14c;
    local_68 = (undefined4)local_158;
    uStack_64 = local_158._4_4_;
    uStack_60 = uStack_150;
    uStack_5c = uStack_14c;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_68);
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e87930(uVar4,DAT_1419f3968,0x80000000,&local_98);
  }
  local_f8 = 0x77;
  cVar2 = FUN_140e491e0(&local_e0);
  if (cVar2 != '\0') {
    local_f8 = 0x78;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_68 = (undefined4)DAT_1419df7b0;
    uStack_64 = DAT_1419df7b0._4_4_;
    uStack_60 = DAT_1419df7b8;
    uStack_5c = DAT_1419df7bc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_68);
    local_b0 = &local_138;
    gml_Script_imgui_push_style_var_x(param_1,param_2,&local_168,1,&local_b0);
  }
  local_f8 = 0x7b;
  cVar2 = FUN_140e491e0(&local_f0);
  if (cVar2 != '\0') {
    local_f8 = 0x7c;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_68 = (undefined4)DAT_1419df7b0;
    uStack_64 = DAT_1419df7b0._4_4_;
    uStack_60 = DAT_1419df7b8;
    uStack_5c = DAT_1419df7bc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_68);
    local_b0 = &local_138;
    gml_Script_imgui_push_style_var_x(param_1,param_2,&local_168,1,&local_b0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

