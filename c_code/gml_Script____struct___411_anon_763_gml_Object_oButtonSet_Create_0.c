// gml_Script____struct___411_anon_763_gml_Object_oButtonSet_Create_0 @ 0x14086cbb0

undefined8 *
gml_Script____struct___411_anon_763_gml_Object_oButtonSet_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
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
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  
  local_60 = "gml_Script_anon@980@___struct___411@anon@763@gml_Object_oButtonSet_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x32;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x33;
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,DAT_1419f93d8);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0d828);
  uStack_dc = DAT_141dd7124;
  uStack_e0 = DAT_141dd7120;
  if ((1 << ((byte)DAT_141dd7124 & 0x1f) & 0x46U) == 0) {
    local_e8 = DAT_141dd7118;
  }
  else {
    FUN_1400419b0(&local_e8,&DAT_141dd7118);
  }
  uVar1 = uStack_dc;
  local_f8 = (undefined4)local_e8;
  uStack_f4 = local_e8._4_4_;
  uStack_f0 = uStack_e0;
  uStack_ec = uStack_dc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_f8);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_50 = local_b8;
  if (puVar2 != local_a8) {
    local_f8 = *puVar2;
    uStack_f4 = puVar2[1];
    uStack_f0 = puVar2[2];
    uStack_ec = puVar2[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_f8);
  }
  local_48 = local_a8;
  if (puVar3 != local_98) {
    local_f8 = *puVar3;
    uStack_f4 = puVar3[1];
    uStack_f0 = puVar3[2];
    uStack_ec = puVar3[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_f8);
  }
  local_40 = local_98;
  puVar2 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_d8,3,&local_50);
  if (puVar2 != local_88) {
    local_f8 = *puVar2;
    uStack_f4 = puVar2[1];
    uStack_f0 = puVar2[2];
    uStack_ec = puVar2[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_f8);
  }
  local_38 = local_88;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_f8);
  local_30 = local_78;
  puVar4 = (undefined8 *)gml_Script_worldwide_get_dialogue(param_1,param_2,&local_c8,2,&local_38);
  if (puVar4 != param_3) {
    local_f8 = *(undefined4 *)puVar4;
    uStack_f4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

