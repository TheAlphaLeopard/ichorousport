// gml_Script_make_outline_font @ 0x1402e7530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_make_outline_font(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___117";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0xed;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddf30) {
    _Init_thread_header(&DAT_141dddf30);
    if (DAT_141dddf30 == -1) {
      DAT_141dddf28 = FUN_140e63aa0(DAT_1419ef6a8);
      _Init_thread_footer(&DAT_141dddf30);
    }
  }
  FUN_140e643a0(param_1,DAT_141dddf28);
  local_18 = 0xee;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1dbd0);
  if (puVar1 != &DAT_141dcec48) {
    local_38 = _DAT_141dcec48;
    uStack_34 = uRam0000000141dcec4c;
    uStack_30 = uRam0000000141dcec50;
    uStack_2c = DAT_141dcec54;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0xef;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1dbb0);
  if (puVar1 != &DAT_141dce918) {
    local_38 = _DAT_141dce918;
    uStack_34 = uRam0000000141dce91c;
    uStack_30 = uRam0000000141dce920;
    uStack_2c = DAT_141dce924;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0xf0;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1dca0);
  if (puVar1 != &DAT_141dce7b8) {
    local_38 = _DAT_141dce7b8;
    uStack_34 = uRam0000000141dce7bc;
    uStack_30 = uRam0000000141dce7c0;
    uStack_2c = DAT_141dce7c4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0xf1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1dc20);
  if (puVar1 != &DAT_141dce858) {
    local_38 = _DAT_141dce858;
    uStack_34 = uRam0000000141dce85c;
    uStack_30 = uRam0000000141dce860;
    uStack_2c = DAT_141dce864;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0xf2;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1ddb0);
  if (puVar1 != &DAT_141dceba8) {
    local_38 = _DAT_141dceba8;
    uStack_34 = uRam0000000141dcebac;
    uStack_30 = uRam0000000141dcebb0;
    uStack_2c = DAT_141dcebb4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0xf3;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1d930);
  if (puVar1 != &DAT_141dce8c8) {
    local_38 = _DAT_141dce8c8;
    uStack_34 = uRam0000000141dce8cc;
    uStack_30 = uRam0000000141dce8d0;
    uStack_2c = DAT_141dce8d4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

