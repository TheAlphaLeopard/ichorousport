// gml_Script_get_execution_scope_anon_10807___scribble_class_typist___scribble_class_typist @ 0x140169260

longlong *
gml_Script_get_execution_scope_anon_10807___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_get_position@anon@10510@__scribble_class_typist@__scribble_class_typist";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x17a;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07738);
  iVar2 = FUN_140e851f0(uVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_18 = 0x17a;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0;
  }
  else {
    local_18 = 0x17b;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04e58);
    plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ad8);
    iVar2 = FUN_140e4a740(uVar3);
    if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0)) {
      if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar4 != param_3) {
      local_38 = (undefined4)*plVar4;
      uStack_34 = *(undefined4 *)((longlong)plVar4 + 4);
      uStack_30 = (undefined4)plVar4[1];
      uStack_2c = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_38);
    }
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

