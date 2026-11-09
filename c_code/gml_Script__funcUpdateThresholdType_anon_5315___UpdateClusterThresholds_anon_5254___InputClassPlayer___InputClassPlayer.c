// gml_Script__funcUpdateThresholdType_anon_5315___UpdateClusterThresholds_anon_5254___InputClassPlayer___InputClassPlayer @ 0x1400475b0

undefined8 *
gml_Script__funcUpdateThresholdType_anon_5315___UpdateClusterThresholds_anon_5254___InputClassPlayer___InputClassPlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  byte local_54;
  longlong local_50;
  byte local_44;
  
  local_70 = "gml_Script___SetMinThreshold@anon@4836@__InputClassPlayer@__InputClassPlayer";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x85;
  _eh_vector_constructor_iterator_(&local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x87;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd7c8);
  local_a8 = puVar4;
  FUN_140e609c0(param_1);
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
    puVar6 = (undefined8 *)*param_5;
  }
  uVar2 = FUN_140e4a740(puVar6);
  puVar4 = (undefined8 *)FUN_140e48e40(puVar4,uVar2);
  FUN_140e609c0(*(undefined8 *)*local_a8);
  if (puVar7 != puVar4) {
    local_a8 = (undefined8 *)*puVar7;
    uStack_a0 = *(undefined4 *)(puVar7 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_a8);
  }
  FUN_140e60910(2);
  local_68 = 0x88;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd688);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd688);
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
    if (puVar7 == &local_60) goto LAB_14004778e;
  }
  local_a8 = (undefined8 *)*puVar7;
  uStack_a0 = *(undefined4 *)(puVar7 + 1);
  uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  FUN_140041b80(&local_60,&local_a8);
LAB_14004778e:
  local_88 = &local_60;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  iVar3 = FUN_140e4a740(puVar7);
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar5 != &local_50) {
    local_a8 = (undefined8 *)*plVar5;
    uStack_a0 = (undefined4)plVar5[1];
    uStack_9c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    FUN_140041b80(&local_50,&local_a8);
  }
  local_80 = &local_50;
  FUN_140e609c0(param_1);
  if (0 < param_4) {
    puVar8 = (undefined8 *)*param_5;
  }
  uVar2 = FUN_140e4a740(puVar8);
  puVar8 = (undefined8 *)FUN_140e48e40(puVar4,uVar2);
  FUN_140e609c0(*(undefined8 *)*puVar4);
  puVar4 = (undefined8 *)FUN_140e79090(&local_98,2,&local_88);
  if (puVar4 != puVar8) {
    local_a8 = (undefined8 *)*puVar4;
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_a8);
  }
  FUN_140e60910(2);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

