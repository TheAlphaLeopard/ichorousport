// gml_Script_seg_apply_force @ 0x140496380

undefined8 *
gml_Script_seg_apply_force
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *local_98;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_seg_add";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 6;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0f148);
  FUN_140046040(uVar5);
  local_48 = 7;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  local_88 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  FUN_140e609c0(param_1);
  uStack_5c = *(undefined4 *)((longlong)plVar6 + 0xc);
  uStack_60 = (undefined4)plVar6[1];
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) == 0) {
    local_68 = (undefined8 *)*plVar6;
  }
  else {
    FUN_1400419b0(&local_68,plVar6);
  }
  local_8c = 7;
  local_98 = (undefined8 *)CONCAT44(local_98._4_4_,1);
  FUN_1400462a0(&local_68,&local_98);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  puVar11 = &DAT_1419df7b0;
  if (param_4 < 1) {
    local_98 = &DAT_1419df7b0;
  }
  else {
    local_98 = (undefined8 *)*param_5;
  }
  iVar2 = FUN_140e4a740(&local_68);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uStack_6c = *(undefined4 *)((longlong)plVar7 + 0xc);
  uStack_70 = (undefined4)plVar7[1];
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
    local_78 = (undefined8 *)*plVar7;
  }
  else {
    FUN_1400419b0(&local_78,plVar7);
  }
  FUN_1400460e0(&local_78,local_98);
  uVar3 = FUN_140e4a740(plVar6);
  puVar9 = local_88;
  ppuVar8 = (undefined8 **)FUN_140e48e40(local_88,uVar3);
  FUN_140e609c0(*(undefined8 *)*puVar9);
  if (&local_78 != ppuVar8) {
    local_88 = local_78;
    uStack_80 = uStack_70;
    uStack_7c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar8);
    }
    FUN_140041b80(ppuVar8,&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(2);
  local_48 = 8;
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  FUN_140e609c0(param_1);
  uStack_6c = *(undefined4 *)((longlong)plVar6 + 0xc);
  uStack_70 = (undefined4)plVar6[1];
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
    local_78 = (undefined8 *)*plVar6;
  }
  else {
    FUN_1400419b0(&local_78,plVar6);
  }
  uStack_5c = 7;
  local_68 = (undefined8 *)CONCAT44(local_68._4_4_,1);
  FUN_1400462a0(&local_78,&local_68);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  iVar2 = FUN_140e4a740(&local_78);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uStack_5c = *(undefined4 *)((longlong)plVar7 + 0xc);
  uStack_60 = (undefined4)plVar7[1];
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) == 0) {
    local_68 = (undefined8 *)*plVar7;
  }
  else {
    FUN_1400419b0(&local_68,plVar7);
  }
  uVar3 = uStack_5c;
  uVar4 = FUN_140e4a740(plVar6);
  ppuVar8 = (undefined8 **)FUN_140e48e40(puVar9,uVar4);
  FUN_140e609c0(*(undefined8 *)*puVar9);
  if (&local_68 != ppuVar8) {
    local_88 = local_68;
    uStack_80 = uStack_60;
    uStack_7c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar8);
    }
    FUN_140041b80(ppuVar8,&local_88);
  }
  if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(2);
  local_48 = 9;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    plVar7 = &DAT_1419df7b0;
  }
  else {
    plVar7 = (longlong *)*param_5;
  }
  uVar3 = FUN_140e4a740(plVar6);
  plVar10 = (longlong *)FUN_140e48e40(puVar9,uVar3);
  FUN_140e609c0(*(undefined8 *)*puVar9);
  if (plVar7 != plVar10) {
    local_68 = (undefined8 *)*plVar7;
    uStack_60 = (undefined4)plVar7[1];
    uStack_5c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar10);
    }
    FUN_140041b80(plVar10,&local_68);
  }
  FUN_140e60910(2);
  local_48 = 10;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fba8);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    plVar7 = &DAT_1419df7b0;
  }
  else {
    plVar7 = (longlong *)param_5[1];
  }
  uVar3 = FUN_140e4a740(plVar6);
  plVar6 = (longlong *)FUN_140e48e40(puVar9,uVar3);
  FUN_140e609c0(*(undefined8 *)*puVar9);
  if (plVar7 != plVar6) {
    local_68 = (undefined8 *)*plVar7;
    uStack_60 = (undefined4)plVar7[1];
    uStack_5c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar6);
    }
    FUN_140041b80(plVar6,&local_68);
  }
  FUN_140e60910(2);
  local_48 = 0xb;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a10b88);
  FUN_140e609c0(param_1);
  if (0 < param_4) {
    puVar11 = (undefined8 *)*param_5;
  }
  FUN_1400460e0(uVar5,puVar11);
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

