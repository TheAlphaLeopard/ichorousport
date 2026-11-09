// gml_Script_GetHistoryDistance_anon_16000___InputClassVirtualButton___InputClassVirtualButton @ 0x14005df30

undefined8 *
gml_Script_GetHistoryDistance_anon_16000___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_GetHistory@anon@14844@__InputClassVirtualButton@__InputClassVirtualButton";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x245;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_18 = 0x247;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe488);
    if (puVar3 == param_3) {
      DAT_141dc7a50 = (undefined8 *)local_28;
      return param_3;
    }
    local_38 = *(undefined4 *)puVar3;
    uStack_34 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_30 = *(undefined4 *)(puVar3 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar3 + 0xc);
  }
  else {
    local_18 = 0x245;
    if (param_3 == &DAT_1419df7b0) {
      DAT_141dc7a50 = (undefined8 *)local_28;
      return param_3;
    }
    local_38 = (undefined4)DAT_1419df7b0;
    uStack_34 = DAT_1419df7b0._4_4_;
    uStack_30 = DAT_1419df7b8;
    uStack_2c = DAT_1419df7bc;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  FUN_140041b80(param_3,&local_38);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

