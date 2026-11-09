// gml_Object_oSidearmPedistal_Create_0 @ 0x140d816f0

void gml_Object_oSidearmPedistal_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oSideArm_Create_0";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0aac8);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_18 = 3;
  FUN_140e98b30(param_1,param_2);
  local_18 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57b30);
  FUN_140e87440(uVar1,DAT_1419ffaa8,0x80000000,&local_58,0,0);
  FUN_140e609c0(param_1);
  if (&local_58 != puVar2) {
    local_48 = (undefined4)local_58;
    uStack_44 = local_58._4_4_;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  local_18 = 7;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56ba0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_anon_724_gml_Object_oSidearmPedistal_Create_0,param_1);
  if (&local_48 != puVar3) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

