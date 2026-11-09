// gml_Script___InputCursorSystem @ 0x140086d80

undefined8 *
gml_Script___InputCursorSystem(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong in_stack_ffffffffffffff88;
  ulonglong in_stack_ffffffffffffff90;
  double local_68;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@1545@anon@1227@__InputCursorSystem@__InputCursorSystem";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_3c = 0xffffff;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_5c = 0;
  local_68 = 0.0;
  local_28 = 0x2a;
  local_58 = 0;
  local_50 = 0;
  local_4c = 5;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(0,DAT_1419fed38);
  iVar2 = FUN_140e4a740(&local_68);
  if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar6 = plVar4;
  }
  FUN_140e87440(plVar6,DAT_1419fd598,0x80000000,&local_48,
                in_stack_ffffffffffffff88 & 0xffffffffffffff00,
                in_stack_ffffffffffffff90 & 0xffffffffffffff00);
  iVar2 = FUN_140e4a740(&local_68);
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
  uVar5 = FUN_140069500(plVar4);
  FUN_140e63610(uVar5,param_2,&local_58,0,&local_48,0);
  local_28 = 0x2b;
  uVar3 = local_5c & 0xffffff;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      local_68 = (double)FUN_140e4b060(&local_68);
      local_5c = 0;
    }
    else {
      if (uVar3 == 7) {
        local_68 = (double)CONCAT44(local_68._4_4_,local_68._0_4_ + 1);
        goto LAB_140086f6c;
      }
      if (uVar3 == 10) {
        local_68 = (double)((longlong)local_68 + 1);
        goto LAB_140086f6c;
      }
      if (uVar3 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_68,&local_68);
        goto LAB_140086f6c;
      }
      local_5c = 0;
    }
  }
  local_68 = local_68 + 1.0;
LAB_140086f6c:
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

