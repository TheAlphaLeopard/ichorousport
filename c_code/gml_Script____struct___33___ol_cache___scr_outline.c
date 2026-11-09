// gml_Script____struct___33___ol_cache___scr_outline @ 0x1400ec990

undefined8 *
gml_Script____struct___33___ol_cache___scr_outline
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script____struct___35@___struct___33@__ol_cache@__scr_outline";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x17;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcd58) {
    _Init_thread_header(&DAT_141ddcd58);
    if (DAT_141ddcd58 == -1) {
      DAT_141ddcbe8 = FUN_140e63aa0(DAT_141a04828);
      _Init_thread_footer(&DAT_141ddcd58);
    }
  }
  FUN_140e643a0(param_1,DAT_141ddcbe8);
  local_28 = 0x18;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a044d8);
  FUN_140e609c0(param_1);
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  if (puVar2 != puVar1) {
    local_48 = *(undefined4 *)puVar2;
    uStack_44 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_40 = *(undefined4 *)(puVar2 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x19;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04478);
  FUN_140e609c0(param_1);
  if (1 < param_4) {
    puVar3 = (undefined8 *)param_5[1];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x1a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04aa8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

