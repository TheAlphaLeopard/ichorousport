// gml_Script_anon_7133_gml_Object_oImGui_Step_0 @ 0x140b24b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_7133_gml_Object_oImGui_Step_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong in_stack_fffffffffffffea0;
  undefined8 **ppuVar13;
  ulonglong uVar14;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined4 local_108 [3];
  byte local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_b8 = "gml_Script_anon@5602@gml_Object_oImGui_Step_0";
  local_c0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c0;
  local_b0 = 0xce;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_14c = 0;
  local_158 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b0 = 0xcf;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3938);
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = *(undefined8 **)(param_5 + 8);
  }
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  ppuVar10 = (undefined1 **)((ulonglong)pcVar9 & 0xffffffffffffff00);
  FUN_140e87440(puVar7,DAT_141a05b88,0x80000000,&local_98,ppuVar10,in_stack_fffffffffffffea0);
  iVar2 = FUN_140e851f0(uVar4,&local_98,DAT_141955260,0);
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_c4 = 0xd;
  if (iVar2 == 0) {
    local_d0 = 0x3ff0000000000000;
  }
  else {
    local_d0 = 0;
  }
  local_b0 = 0xd0;
  cVar1 = FUN_140e491e0(&local_d0);
  if (cVar1 != '\0') {
    local_b0 = 0xd1;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_148 = CONCAT44(uRam00000001419ebcb4,_DAT_1419ebcb0);
    uStack_140 = uRam00000001419ebcb8;
    uStack_13c = uRam00000001419ebcbc;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_148);
    local_e8 = local_128;
    local_148 = CONCAT44(uRam00000001419ebd24,_DAT_1419ebd20);
    uStack_140 = uRam00000001419ebd28;
    uStack_13c = uRam00000001419ebd2c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
    local_e0 = &local_118;
    local_148 = CONCAT44(uRam00000001419ebd64,_DAT_1419ebd60);
    uStack_140 = uRam00000001419ebd68;
    uStack_13c = uRam00000001419ebd6c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_d8 = local_108;
    ppuVar10 = &local_e8;
    gml_Script_imgui_push_style_var(param_1,param_2,&local_158,3,ppuVar10);
  }
  local_b0 = 0xd4;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = *(undefined8 **)(param_5 + 8);
  }
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a05b88,0x80000000,&local_98,(ulonglong)ppuVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffea0);
  local_148 = local_98;
  uStack_140 = uStack_90;
  uStack_13c = uStack_8c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_148);
  local_e8 = local_128;
  ppuVar10 = &local_e8;
  uVar4 = gml_Script_imgui_arrow_button(param_1,param_2,&local_158,1,ppuVar10);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_b0 = 0xd5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = *(undefined8 **)(param_5 + 8);
    }
    in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    FUN_140e87440(puVar7,DAT_1419f5858,0x80000000,&local_a8,uVar11,in_stack_fffffffffffffea0);
    FUN_140e87440(uVar3,DAT_141a1f3f0,0x80000000,&local_58,uVar11 & 0xffffffffffffff00,
                  in_stack_fffffffffffffea0 & 0xffffffffffffff00);
    local_148 = local_58;
    uStack_140 = uStack_50;
    uStack_13c = uStack_4c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
    local_e0 = &local_118;
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = *(undefined8 **)(param_5 + 8);
    }
    uVar4 = FUN_140069500(puVar7);
    ppuVar13 = &local_e0;
    puVar7 = &local_a8;
    FUN_140e63610(uVar4,param_2,&local_138,1,puVar7,ppuVar13);
    local_b0 = 0xd6;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = *(undefined8 **)(param_5 + 8);
    }
    uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    uVar11 = (ulonglong)puVar7 & 0xffffffffffffff00;
    FUN_140e87440(puVar6,DAT_1419f5858,0x80000000,&local_a8,uVar11,uVar14);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a1ecf0,0x80000000,&local_68,uVar11,uVar14 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar11 >> 0x20);
    uStack_13c = 0xf;
    local_148 = 0x100000000000025;
    local_f8 = 0x25;
    uStack_f4 = 0x1000000;
    uStack_f0 = uStack_140;
    uStack_ec = 0xf;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_f8);
    local_e8 = local_128;
    local_f8 = (undefined4)local_68;
    uStack_f4 = local_68._4_4_;
    uStack_f0 = uStack_60;
    uStack_ec = uStack_5c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_f8);
    local_e0 = &local_118;
    puVar5 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_138,1,CONCAT44(uVar12,DAT_1419fdca8),&local_e8);
    if (puVar5 != local_108) {
      local_f8 = *puVar5;
      uStack_f4 = puVar5[1];
      uStack_f0 = puVar5[2];
      uStack_ec = puVar5[3];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_f8);
    }
    local_d8 = local_108;
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = *(undefined8 **)(param_5 + 8);
    }
    uVar3 = FUN_140069500(puVar7);
    ppuVar13 = &local_e0;
    puVar7 = &local_a8;
    FUN_140e63610(uVar3,param_2,&local_158,2,puVar7,ppuVar13);
    local_b0 = 0xd7;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uStack_13c = 0xf;
    local_148 = 0x1000000000000bf;
    FUN_140e87440(&local_148,DAT_141a45a18,0x80000000,&local_78,
                  (ulonglong)puVar7 & 0xffffffffffffff00,(ulonglong)ppuVar13 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = 0xf;
    local_148 = 0x100000000000025;
    FUN_140e87170(&local_148,DAT_141a1f580,0x80000000,&local_88,param_1,param_2);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_f8 = (undefined4)local_88;
    uStack_f4 = local_88._4_4_;
    uStack_f0 = uStack_80;
    uStack_ec = uStack_7c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_f8);
    local_e8 = local_128;
    if ((param_4 < 2) || (puVar8 = *(undefined8 **)(param_5 + 8), puVar8 != &local_118)) {
      local_f8 = *(undefined4 *)puVar8;
      uStack_f4 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_f0 = *(undefined4 *)(puVar8 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_f8);
    }
    local_e0 = &local_118;
    uStack_13c = 0xf;
    local_148 = 0x1000000000000bf;
    uVar3 = FUN_140069500(&local_148);
    FUN_140e63610(uVar3,param_2,&local_158,2,&local_78,&local_e8);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
  }
  local_b0 = 0xdb;
  cVar1 = FUN_140e491e0(&local_d0);
  if (cVar1 != '\0') {
    local_b0 = 0xdc;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_f8 = (undefined4)DAT_1419df7b0;
    uStack_f4 = DAT_1419df7b0._4_4_;
    uStack_f0 = DAT_1419df7b8;
    uStack_ec = DAT_1419df7bc;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_f8);
    local_e8 = local_128;
    gml_Script_imgui_push_style_var_x(param_1,param_2,&local_158,1,&local_e8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c0;
  return param_3;
}

