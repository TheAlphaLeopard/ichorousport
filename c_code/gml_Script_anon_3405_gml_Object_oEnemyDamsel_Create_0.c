// gml_Script_anon_3405_gml_Object_oEnemyDamsel_Create_0 @ 0x1409788a0

undefined8 *
gml_Script_anon_3405_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *local_res8;
  undefined4 uVar4;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@2686@gml_Object_oEnemyDamsel_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x81;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x82;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0638);
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_38 = 0x82;
  }
  else {
    local_38 = 0x83;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    local_78 = 0;
    local_70 = 0;
    local_6c = 5;
    if (puVar2 != local_68) {
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      uStack_50 = puVar2[2];
      uStack_4c = puVar2[3];
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_58);
    }
    local_res8 = local_68;
    FUN_140e634e0(param_1,param_2,&local_78,1,CONCAT44(uVar4,DAT_141a07788),&local_res8);
    local_38 = 0x84;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0638);
    FUN_140e609c0(param_1);
    if (puVar3 != &DAT_1419df7b0) {
      local_58 = (undefined4)DAT_1419df7b0;
      uStack_54 = DAT_1419df7b0._4_4_;
      uStack_50 = DAT_1419df7b8;
      uStack_4c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_58);
    }
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

