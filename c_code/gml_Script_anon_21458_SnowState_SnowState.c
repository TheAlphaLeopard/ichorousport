// gml_Script_anon_21458_SnowState_SnowState @ 0x140508790

longlong *
gml_Script_anon_21458_SnowState_SnowState(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@20952@SnowState@SnowState";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  bVar3 = true;
  bVar2 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x29e;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcbe8);
  if (((*(int *)((longlong)plVar4 + 0xc) == 2) && (*plVar4 != 0)) && (1 < *(int *)(*plVar4 + 0x24)))
  {
    plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcbe8);
    if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_4c = *(undefined4 *)((longlong)plVar4 + 0xc);
    uStack_50 = (int)plVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_58 = *plVar4;
    }
    else {
      FUN_1400419b0(&local_58,plVar4);
    }
    plVar4 = &local_58;
  }
  else {
    local_5c = DAT_1419df7bc;
    local_60 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_68 = DAT_1419df7b0;
    }
    else {
      FUN_1400419b0(&local_68,&DAT_1419df7b0);
    }
    plVar4 = &local_68;
    bVar3 = false;
    bVar2 = true;
  }
  if (plVar4 != param_3) {
    local_48 = (undefined4)*plVar4;
    uStack_44 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_40 = (undefined4)plVar4[1];
    uStack_3c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if (bVar2) {
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
  }
  if ((bVar3) && ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

