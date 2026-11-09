// gml_Script___UpdateClusterThresholds_anon_5254___InputClassPlayer___InputClassPlayer @ 0x140047910

undefined8 *
gml_Script___UpdateClusterThresholds_anon_5254___InputClassPlayer___InputClassPlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_98 [32];
  undefined8 local_78;
  byte local_6c;
  longlong local_68;
  byte local_5c;
  undefined8 *local_48;
  longlong *local_40;
  
  local_b0 = "gml_Script___SetMaxThreshold@anon@5041@__InputClassPlayer@__InputClassPlayer";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x8b;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x8d;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd7c8);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd7c8);
  puVar9 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)param_5[1];
    if (puVar8 == &local_78) goto LAB_140047a22;
  }
  local_d8 = *(undefined4 *)puVar8;
  uStack_d4 = *(undefined4 *)((longlong)puVar8 + 4);
  uStack_d0 = *(undefined4 *)(puVar8 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar8 + 0xc);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_d8);
LAB_140047a22:
  local_48 = &local_78;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  iVar2 = FUN_140e4a740(puVar8);
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
  if (plVar4 != &local_68) {
    local_d8 = (undefined4)*plVar4;
    uStack_d4 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_d0 = (undefined4)plVar4[1];
    uStack_cc = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_d8);
  }
  local_40 = &local_68;
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  uVar3 = FUN_140e4a740(puVar8);
  puVar6 = (undefined4 *)FUN_140e48e40(puVar5,uVar3);
  FUN_140e609c0(*(undefined8 *)*puVar5);
  puVar7 = (undefined4 *)FUN_140e79230(&local_c8,2,&local_48);
  if (puVar7 != puVar6) {
    local_d8 = *puVar7;
    uStack_d4 = puVar7[1];
    uStack_d0 = puVar7[2];
    uStack_cc = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_d8);
  }
  FUN_140e60910(2);
  local_a8 = 0x8e;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd688);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
  }
  else {
    puVar9 = (undefined8 *)param_5[1];
    param_5 = (undefined8 *)*param_5;
  }
  uVar3 = FUN_140e4a740(param_5);
  puVar8 = (undefined8 *)FUN_140e48e40(puVar5,uVar3);
  FUN_140e609c0(*(undefined8 *)*puVar5);
  if (puVar9 != puVar8) {
    local_d8 = *(undefined4 *)puVar9;
    uStack_d4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_d0 = *(undefined4 *)(puVar9 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_d8);
  }
  FUN_140e60910(2);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

