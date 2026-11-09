// gml_Script_anon_763_gml_Object_oButtonSet_Create_0 @ 0x14086cef0

undefined8 *
gml_Script_anon_763_gml_Object_oButtonSet_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  char *local_38;
  undefined4 local_30;
  
  local_38 = "gml_Script_anon@1076@___struct___411@anon@763@gml_Object_oButtonSet_Create_0";
  local_40 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_40;
  local_30 = 0x36;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_30 = 0x37;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0d618);
  cVar2 = FUN_140e491e0(uVar3);
  if (cVar2 == '\0') {
    local_30 = 0x3a;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,DAT_1419f93d8);
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0d828);
    uStack_bc = DAT_141dd7104;
    uStack_c0 = DAT_141dd7100;
    if ((1 << ((byte)DAT_141dd7104 & 0x1f) & 0x46U) == 0) {
      local_c8 = DAT_141dd70f8;
    }
    else {
      FUN_1400419b0(&local_c8,&DAT_141dd70f8);
    }
    uVar1 = uStack_bc;
    local_f8 = (undefined4)local_c8;
    uStack_f4 = local_c8._4_4_;
    uStack_f0 = uStack_c0;
    uStack_ec = uStack_bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_f8);
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
  }
  else {
    local_30 = 0x38;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,DAT_1419f93d8);
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0d828);
    uStack_bc = DAT_141dd70f4;
    uStack_c0 = DAT_141dd70f0;
    if ((1 << ((byte)DAT_141dd70f4 & 0x1f) & 0x46U) == 0) {
      local_c8 = DAT_141dd70e8;
    }
    else {
      FUN_1400419b0(&local_c8,&DAT_141dd70e8);
    }
    uVar1 = uStack_bc;
    local_f8 = (undefined4)local_c8;
    uStack_f4 = local_c8._4_4_;
    uStack_f0 = uStack_c0;
    uStack_ec = uStack_bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_f8);
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
  }
  local_68 = local_b8;
  if (puVar4 != local_a8) {
    local_f8 = *puVar4;
    uStack_f4 = puVar4[1];
    uStack_f0 = puVar4[2];
    uStack_ec = puVar4[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_f8);
  }
  local_60 = local_a8;
  if (puVar5 != local_98) {
    local_f8 = *puVar5;
    uStack_f4 = puVar5[1];
    uStack_f0 = puVar5[2];
    uStack_ec = puVar5[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_f8);
  }
  local_58 = local_98;
  puVar4 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_e8,3,&local_68);
  if (puVar4 != local_88) {
    local_f8 = *puVar4;
    uStack_f4 = puVar4[1];
    uStack_f0 = puVar4[2];
    uStack_ec = puVar4[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_f8);
  }
  local_50 = local_88;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_f8);
  local_48 = local_78;
  puVar6 = (undefined8 *)gml_Script_worldwide_get_dialogue(param_1,param_2,&local_d8,2,&local_50);
  if (puVar6 != param_3) {
    local_f8 = *(undefined4 *)puVar6;
    uStack_f4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_f0 = *(undefined4 *)(puVar6 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_40;
  return param_3;
}

