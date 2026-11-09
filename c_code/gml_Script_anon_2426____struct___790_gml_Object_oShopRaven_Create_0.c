// gml_Script_anon_2426____struct___790_gml_Object_oShopRaven_Create_0 @ 0x140d75f50

undefined8 *
gml_Script_anon_2426____struct___790_gml_Object_oShopRaven_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_res8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_60 = "gml_Script_anon@2082@___struct___790@gml_Object_oShopRaven_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x7e;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x7f;
  uStack_3c = 0xf;
  local_48 = 0x10000010000037b;
  local_78 = 0x37b;
  uStack_74 = 0x1000001;
  uStack_70 = uStack_40;
  uStack_6c = 0xf;
  FUN_140041b80(&local_88,&local_78);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_88);
  local_58 = 0x80;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_a8);
  local_58 = 0x81;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_b8);
  local_58 = 0x83;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7358);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7008);
  puVar3 = (undefined4 *)FUN_140e63610(param_1,param_2,&local_d8,0,uVar1,0);
  if (puVar3 != local_98) {
    local_78 = *puVar3;
    uStack_74 = puVar3[1];
    uStack_70 = puVar3[2];
    uStack_6c = puVar3[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_78);
  }
  local_res8 = local_98;
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)gml_Script_CreateBossUi(param_1,param_2,&local_c8,1,&local_res8);
  if (puVar3 != puVar2) {
    local_78 = *puVar3;
    uStack_74 = puVar3[1];
    uStack_70 = puVar3[2];
    uStack_6c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

