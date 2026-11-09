// gml_Script_anon_11717_SnowState_SnowState @ 0x1405002a0

undefined8 *
gml_Script_anon_11717_SnowState_SnowState(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@11717@SnowState@SnowState";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uStack_7c = 0xffffff;
  local_88 = 0;
  bVar3 = true;
  bVar2 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x170;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcbe8);
  if (((*(int *)((longlong)plVar4 + 0xc) == 2) && (*plVar4 != 0)) && (0 < *(int *)(*plVar4 + 0x24)))
  {
    plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcbe8);
    if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(lVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_5c = *(undefined4 *)((longlong)plVar4 + 0xc);
    uStack_60 = (int)plVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_68 = *plVar4;
    }
    else {
      FUN_1400419b0(&local_68,plVar4);
    }
    plVar4 = &local_68;
  }
  else {
    local_6c = DAT_1419df7bc;
    local_70 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_78 = DAT_1419df7b0;
    }
    else {
      FUN_1400419b0(&local_78,&DAT_1419df7b0);
    }
    plVar4 = &local_78;
    bVar3 = false;
    bVar2 = true;
  }
  local_58 = (undefined4)*plVar4;
  uStack_54 = *(undefined4 *)((longlong)plVar4 + 4);
  uStack_50 = (undefined4)plVar4[1];
  uStack_4c = *(undefined4 *)((longlong)plVar4 + 0xc);
  FUN_140041b80(&local_88,&local_58);
  if (bVar2) {
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
  }
  if ((bVar3) && ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_68);
  }
  local_38 = 0x171;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcee8);
  if (((*(int *)((longlong)plVar4 + 0xc) == 2) && (*plVar4 != 0)) && (0 < *(int *)(*plVar4 + 0x24)))
  {
    local_38 = 0x171;
    plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcee8);
    if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(lVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar4 != &local_88) {
      local_58 = (undefined4)*plVar4;
      uStack_54 = *(undefined4 *)((longlong)plVar4 + 4);
      uStack_50 = (undefined4)plVar4[1];
      uStack_4c = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_58);
    }
  }
  local_38 = 0x172;
  if (&local_88 != param_3) {
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

