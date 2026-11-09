// gml_Script____struct___651_gml_Object_oPlayer_Create_0 @ 0x140c08700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___651_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___649@gml_Object_oPlayer_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x3cb;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2c8c) {
    _Init_thread_header(&DAT_141de2c8c);
    if (DAT_141de2c8c == -1) {
      DAT_141de2c98 = FUN_140e63aa0(DAT_1419f7dc8);
      _Init_thread_footer(&DAT_141de2c8c);
    }
  }
  FUN_140e643a0(param_1,DAT_141de2c98);
  local_18 = 0x3cb;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05b88);
  if (puVar1 != &DAT_141dda588) {
    local_38 = _DAT_141dda588;
    uStack_34 = uRam0000000141dda58c;
    uStack_30 = uRam0000000141dda590;
    uStack_2c = DAT_141dda594;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef8a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08b78);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4049000000000000;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3fe6666666666666;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

