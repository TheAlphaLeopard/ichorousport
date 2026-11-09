// gml_Object_oBreakableDangly_Draw_0 @ 0x1408584c0

void gml_Object_oBreakableDangly_Draw_0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  longlong *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oBreakableDangly_Alarm_2";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_18 = 2;
  uStack_2c = 6;
  local_38 = param_1;
  FUN_140e87440(&local_38,DAT_141a0a728,0x80000000,&local_48,0,0);
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  uStack_2c = 0xf;
  local_38 = (longlong *)0x10000010000011b;
  iVar1 = FUN_140e851f0(&local_48,&local_38,DAT_141955260,0);
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if (iVar1 != 0) {
    local_18 = 3;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a158);
    if (puVar2 != &local_58) {
      local_38 = (longlong *)*puVar2;
      uStack_30 = *(undefined4 *)(puVar2 + 1);
      uStack_2c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      FUN_140041b80(&local_58,&local_38);
    }
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_58);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

