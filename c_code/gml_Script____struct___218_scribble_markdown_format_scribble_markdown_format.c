// gml_Script____struct___218_scribble_markdown_format_scribble_markdown_format @ 0x14047b0c0

undefined8 *
gml_Script____struct___218_scribble_markdown_format_scribble_markdown_format
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = 
  "gml_Script____struct___226@___struct___218@scribble_markdown_format@scribble_markdown_format";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0xce;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf148) {
    _Init_thread_header(&DAT_141ddf148);
    if (DAT_141ddf148 == -1) {
      DAT_141ddf100 = FUN_140e63aa0(DAT_1419f9248);
      _Init_thread_footer(&DAT_141ddf148);
    }
  }
  FUN_140e643a0(param_1,DAT_141ddf100);
  local_28 = 0xcf;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9288);
  uStack_4c = 0xd;
  local_58 = 0x3ff0000000000000;
  if (&local_58 != puVar1) {
    local_48 = 0;
    uStack_44 = 0x3ff00000;
    uStack_40 = uStack_50;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  local_28 = 0xd0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9448);
  uStack_4c = 0xd;
  local_58 = 0x3ff0000000000000;
  if (&local_58 != puVar1) {
    local_48 = 0;
    uStack_44 = 0x3ff00000;
    uStack_40 = uStack_50;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

