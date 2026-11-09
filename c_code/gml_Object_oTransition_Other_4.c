// gml_Object_oTransition_Other_4 @ 0x140dd9dd0

void gml_Object_oTransition_Other_4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oTransition_Destroy_0";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b00);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b60);
  local_18 = 1;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01fd8);
  FUN_140e609c0(DAT_141a729d8);
  if (puVar3 != puVar1) {
    local_38 = *puVar3;
    uStack_34 = puVar3[1];
    uStack_30 = puVar3[2];
    uStack_2c = puVar3[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  local_18 = 2;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01fb8);
  FUN_140e609c0(DAT_141a729d8);
  if (puVar1 != puVar2) {
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

