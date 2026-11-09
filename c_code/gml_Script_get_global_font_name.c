// gml_Script_get_global_font_name @ 0x1402e68e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_get_global_font_name(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___116";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0xd2;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddefc) {
    _Init_thread_header(&DAT_141dddefc);
    if (DAT_141dddefc == -1) {
      DAT_141dddef0 = FUN_140e63aa0(DAT_1419ef478);
      _Init_thread_footer(&DAT_141dddefc);
    }
  }
  FUN_140e643a0(param_1,DAT_141dddef0);
  local_18 = 0xd3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1dbd0);
  if (puVar1 != &DAT_141dcef28) {
    local_38 = (undefined4)DAT_141dcef28;
    uStack_34 = DAT_141dcef28._4_4_;
    uStack_30 = DAT_141dcef30;
    uStack_2c = DAT_141dcef34;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0xd4;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eef38);
  if (puVar2 != &DAT_141dcf178) {
    local_38 = _DAT_141dcf178;
    uStack_34 = uRam0000000141dcf17c;
    uStack_30 = uRam0000000141dcf180;
    uStack_2c = DAT_141dcf184;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

