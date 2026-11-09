// gml_Object_oSawBlade_Step_0 @ 0x140d5e570

void gml_Object_oSawBlade_Step_0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oSawBlade_Alarm_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_18 = 2;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  FUN_140e87440(uVar1,DAT_1419f5ef8,0x80000000,&local_48,0,0);
  FUN_140e609c0(param_1);
  if (&local_48 != puVar2) {
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

