// gml_GlobalScript_timeFuncs @ 0x1405dc8a0

undefined8 *
gml_GlobalScript_timeFuncs
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  double dVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  uint uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  byte local_64;
  longlong local_60;
  byte local_54;
  undefined8 *local_50;
  longlong *local_48 [2];
  
  local_80 = "gml_Script_StructPickRandomVariable";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 2;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 4;
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_1405dc984:
    local_d8 = *(undefined4 *)puVar2;
    uStack_d4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_d0 = *(undefined4 *)(puVar2 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_60);
    }
    FUN_140041b80(&local_60,&local_d8);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_60) goto LAB_1405dc984;
  }
  local_48[0] = &local_60;
  uVar9 = CONCAT44(uVar6,DAT_141a063c8);
  plVar3 = (longlong *)FUN_140e634e0(param_1,param_2,&local_c8,1,uVar9,local_48);
  uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
  lVar5 = 0;
  uVar8 = 0xffffff;
  if (plVar3 != &local_98) {
    local_d8 = (undefined4)*plVar3;
    uStack_d4 = *(undefined4 *)((longlong)plVar3 + 4);
    uStack_d0 = (undefined4)plVar3[1];
    uStack_cc = *(undefined4 *)((longlong)plVar3 + 0xc);
    FUN_140041b80(&local_98,&local_d8);
    lVar5 = local_98;
    uVar8 = uStack_8c;
  }
  local_78 = 6;
  iVar4 = 0;
  if ((uVar8 == 2) && (lVar5 != 0)) {
    iVar4 = *(int *)(lVar5 + 0x24);
  }
  dVar1 = (double)FUN_140e78f00((longlong)(iVar4 + -1));
  iVar4 = (int)dVar1;
  plVar3 = (longlong *)0x0;
  if (((uVar8 & 0xffffff) == 2) && (lVar5 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar5 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar5 + 0x24));
    }
    else {
      plVar3 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar5 + 8));
    }
    if (plVar3 == &local_b8) goto LAB_1405dcaac;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar3 = &local_98;
  }
  local_d8 = (undefined4)*plVar3;
  uStack_d4 = *(undefined4 *)((longlong)plVar3 + 4);
  uStack_d0 = (undefined4)plVar3[1];
  uStack_cc = *(undefined4 *)((longlong)plVar3 + 0xc);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_d8);
LAB_1405dcaac:
  local_78 = 8;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((param_4 < 1) || (puVar7 = (undefined8 *)*param_5, puVar7 != &local_70)) {
    local_d8 = *(undefined4 *)puVar7;
    uStack_d4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_d0 = *(undefined4 *)(puVar7 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_d8);
  }
  local_50 = &local_70;
  local_48[0] = &local_b8;
  puVar7 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar6,DAT_141a01138),&local_50);
  uVar6 = 0xffffff;
  if (puVar7 != &local_a8) {
    local_d8 = *(undefined4 *)puVar7;
    uStack_d4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_d0 = *(undefined4 *)(puVar7 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar7 + 0xc);
    FUN_140041b80(&local_a8,&local_d8);
    uVar6 = uStack_9c;
  }
  local_78 = 0xb;
  if (&local_a8 != param_3) {
    local_d8 = (undefined4)local_a8;
    uStack_d4 = local_a8._4_4_;
    uStack_d0 = uStack_a0;
    uStack_cc = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

