// gml_Script_anon_1901_gml_Object_oTutorial_Step_0 @ 0x140df45b0

void gml_Script_anon_1901_gml_Object_oTutorial_Step_0(longlong *param_1)

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
  
  local_20 = "gml_Object_oTutorial_Alarm_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 4;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8678);
  FUN_140046040(uVar1);
  local_18 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ae8);
  uStack_3c = 0xd;
  local_48 = 0;
  if (&local_48 != puVar2) {
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = uStack_40;
    uStack_2c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

