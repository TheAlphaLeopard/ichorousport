// gml_Script_InputTriggerEffectFeedback @ 0x1403679e0

undefined8 *
gml_Script_InputTriggerEffectFeedback
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_InputSetHotswapCallback";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 7;
  local_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde710) &&
     (_Init_thread_header(&DAT_141dde710), DAT_141dde710 == -1)) {
    DAT_141dde718 = (longlong *)FUN_140e63aa0(DAT_1419f3708);
    _Init_thread_footer(&DAT_141dde710);
  }
  if (DAT_141ddc137 == '\0') {
    FUN_140e64380(DAT_141dde718,"gml_Script_InputSetHotswapCallback");
    FUN_140e64380(param_1,"gml_Script_InputSetHotswapCallback");
  }
  local_38 = 9;
  if (DAT_141ddc137 == '\0') {
    DAT_141ddc137 = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141dde718 + 0x10))(DAT_141dde718,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde718);
    puVar2 = (undefined4 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_68,0,0);
    if (puVar2 != puVar1) {
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      uStack_50 = puVar2[2];
      uStack_4c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_58);
    }
    FUN_140e60910(1);
  }
  local_38 = 0xc;
  uVar3 = (**(code **)(*DAT_141dde718 + 8))(DAT_141dde718,DAT_1419fcb48);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_78) goto LAB_140367bc8;
  }
  local_58 = *(undefined4 *)param_5;
  uStack_54 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_58);
LAB_140367bc8:
  FUN_140e87930(uVar3,DAT_141a027e8,0x80000000,&local_78);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

