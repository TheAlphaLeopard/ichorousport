// gml_Script_anon_6439_gml_Object_oImGui_Step_0 @ 0x140b24530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_6439_gml_Object_oImGui_Step_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 **ppuVar7;
  undefined4 uVar8;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  
  local_60 = "gml_Script_anon@3545@gml_Object_oImGui_Step_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x87;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x88;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3938);
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = *(undefined8 **)(param_5 + 8);
  }
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  ppuVar7 = (undefined1 **)((ulonglong)pcVar6 & 0xffffffffffffff00);
  FUN_140e87440(puVar4,DAT_141a05b88,0x80000000,&local_78,ppuVar7,in_stack_ffffffffffffff00);
  iVar2 = FUN_140e851f0(uVar3,&local_78,DAT_141955260,0);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0xd;
  if (iVar2 == 0) {
    local_d8 = 0x3ff0000000000000;
  }
  else {
    local_d8 = 0;
  }
  local_58 = 0x89;
  cVar1 = FUN_140e491e0(&local_d8);
  if (cVar1 != '\0') {
    local_58 = 0x8a;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_e8 = CONCAT44(uRam00000001419ebcb4,_DAT_1419ebcb0);
    uStack_e0 = uRam00000001419ebcb8;
    uStack_dc = uRam00000001419ebcbc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_e8);
    local_50 = local_a8;
    local_e8 = CONCAT44(uRam00000001419ebd24,_DAT_1419ebd20);
    uStack_e0 = uRam00000001419ebd28;
    uStack_dc = uRam00000001419ebd2c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_e8);
    local_48 = &local_98;
    local_e8 = CONCAT44(uRam00000001419ebd64,_DAT_1419ebd60);
    uStack_e0 = uRam00000001419ebd68;
    uStack_dc = uRam00000001419ebd6c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_e8);
    local_40 = local_88;
    ppuVar7 = &local_50;
    gml_Script_imgui_push_style_var(param_1,param_2,&local_f8,3,ppuVar7);
  }
  local_58 = 0x8d;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = *(undefined8 **)(param_5 + 8);
  }
  FUN_140e87440(puVar4,DAT_141a05b88,0x80000000,&local_78,(ulonglong)ppuVar7 & 0xffffffffffffff00,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  local_e8 = local_78;
  uStack_e0 = uStack_70;
  uStack_dc = uStack_6c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_e8);
  local_50 = local_a8;
  ppuVar7 = &local_50;
  uVar3 = gml_Script_imgui_arrow_button(param_1,param_2,&local_f8,1,ppuVar7);
  uVar8 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_58 = 0x8e;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((param_4 < 2) || (puVar5 = *(undefined8 **)(param_5 + 8), puVar5 != &local_98)) {
      local_e8 = *puVar5;
      uStack_e0 = *(undefined4 *)(puVar5 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_e8);
    }
    local_48 = &local_98;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar8,DAT_1419fd0c8),&local_48);
    if (puVar5 != &local_b8) {
      local_e8 = *puVar5;
      uStack_e0 = *(undefined4 *)(puVar5 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_e8);
    }
    uStack_dc = 0xf;
    local_e8 = 0x100000000000106;
    FUN_140e87930(&local_e8,DAT_141a0a958,0x80000000,&local_b8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
  }
  local_58 = 0x92;
  cVar1 = FUN_140e491e0(&local_d8);
  if (cVar1 != '\0') {
    local_58 = 0x93;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_e0 = DAT_1419df7b8;
    uStack_dc = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_e8);
    local_50 = local_a8;
    gml_Script_imgui_push_style_var_x(param_1,param_2,&local_f8,1,&local_50);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

