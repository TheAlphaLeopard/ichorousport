// gml_Script_anon_191_BossAttribute_gml_Object_oInfinityManager_Create_0 @ 0x140b25cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_191_BossAttribute_gml_Object_oInfinityManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined1 **ppuVar8;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined4 local_54;
  
  local_c0 = "gml_Script_anon@7133@gml_Object_oImGui_Step_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x104;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x105;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3968);
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = *(undefined8 **)(param_5 + 8);
  }
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(puVar4,DAT_141a05b88,0x80000000,&local_88,uVar7,0);
  iVar2 = FUN_140e851f0(uVar3,&local_88,DAT_141955260,0);
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_94 = 0xd;
  if (iVar2 == 0) {
    local_a0 = 0x3ff0000000000000;
  }
  else {
    local_a0 = 0;
  }
  local_b8 = 0x106;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = *(undefined8 **)(param_5 + 8);
  }
  ppuVar8 = (undefined1 **)(uVar7 & 0xffffffffffffff00);
  FUN_140e87440(puVar4,DAT_141a0ab58,0x80000000,&local_60,ppuVar8,0);
  uStack_fc = 0;
  local_108 = 0;
  iVar2 = FUN_140e851f0(&local_60,&local_108,DAT_141955260,1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 0xd;
  if (iVar2 == -2 || 0 < iVar2) {
    local_b0 = 0;
  }
  else {
    local_b0 = 0x3ff0000000000000;
  }
  local_b8 = 0x108;
  cVar1 = FUN_140e491e0(&local_b0);
  if (cVar1 != '\0') {
    local_b8 = 0x109;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    local_108 = CONCAT44(uRam00000001419ebcb4,_DAT_1419ebcb0);
    uStack_100 = uRam00000001419ebcb8;
    uStack_fc = uRam00000001419ebcbc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_108);
    local_78 = local_f8;
    local_108 = CONCAT44(uRam00000001419ebc84,_DAT_1419ebc80);
    uStack_100 = uRam00000001419ebc88;
    uStack_fc = uRam00000001419ebc8c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_108);
    local_70 = local_e8;
    local_108 = CONCAT44(uRam00000001419ebd64,_DAT_1419ebd60);
    uStack_100 = uRam00000001419ebd68;
    uStack_fc = uRam00000001419ebd6c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_108);
    local_68 = local_d8;
    ppuVar8 = &local_78;
    gml_Script_imgui_push_style_var(param_1,param_2,&local_118,3,ppuVar8);
  }
  local_b8 = 0x10c;
  cVar1 = FUN_140e491e0(&local_a0);
  if (cVar1 != '\0') {
    local_b8 = 0x10d;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    local_108 = CONCAT44(uRam00000001419ebcb4,_DAT_1419ebcb0);
    uStack_100 = uRam00000001419ebcb8;
    uStack_fc = uRam00000001419ebcbc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_108);
    local_78 = local_f8;
    local_108 = CONCAT44(uRam00000001419ebc44,_DAT_1419ebc40);
    uStack_100 = uRam00000001419ebc48;
    uStack_fc = uRam00000001419ebc4c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_108);
    local_70 = local_e8;
    local_108 = CONCAT44(uRam00000001419ebd64,_DAT_1419ebd60);
    uStack_100 = uRam00000001419ebd68;
    uStack_fc = uRam00000001419ebd6c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_108);
    local_68 = local_d8;
    ppuVar8 = &local_78;
    gml_Script_imgui_push_style_var(param_1,param_2,&local_118,3,ppuVar8);
  }
  local_b8 = 0x110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = *(undefined8 **)(param_5 + 8);
  }
  FUN_140e87440(puVar4,DAT_141a05b88,0x80000000,&local_88,(ulonglong)ppuVar8 & 0xffffffffffffff00,0)
  ;
  local_108 = local_88;
  uStack_100 = uStack_80;
  uStack_fc = uStack_7c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_108);
  local_78 = local_f8;
  ppuVar8 = &local_78;
  uVar3 = gml_Script_imgui_arrow_button(param_1,param_2,&local_118,1,ppuVar8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_b8 = 0x111;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3968);
    if (1 < param_4) {
      puVar5 = *(undefined8 **)(param_5 + 8);
    }
    FUN_140e87440(puVar5,DAT_141a05b88,0x80000000,&local_88,(ulonglong)ppuVar8 & 0xffffffffffffff00,
                  0);
    FUN_140e609c0(param_1);
    if (&local_88 != puVar4) {
      local_108 = local_88;
      uStack_100 = uStack_80;
      uStack_fc = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_108);
    }
    FUN_140e60910(1);
  }
  local_b8 = 0x114;
  cVar1 = FUN_140e491e0(&local_a0);
  if (cVar1 != '\0') {
    local_b8 = 0x115;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    local_108 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_100 = DAT_1419df7b8;
    uStack_fc = DAT_1419df7bc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_108);
    gml_Script_imgui_push_style_var_x(param_1,param_2,&local_118,1,&local_78);
  }
  local_b8 = 0x118;
  cVar1 = FUN_140e491e0(&local_b0);
  if (cVar1 != '\0') {
    local_b8 = 0x119;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    local_108 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_100 = DAT_1419df7b8;
    uStack_fc = DAT_1419df7bc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_108);
    gml_Script_imgui_push_style_var_x(param_1,param_2,&local_118,1,&local_78);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

