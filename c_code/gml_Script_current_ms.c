// gml_Script_current_ms @ 0x1405dcc60

undefined8 *
gml_Script_current_ms
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  double dVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined8 local_60;
  byte local_54;
  undefined8 *local_48 [2];
  
  local_90 = "gml_Script_StructPickRandomKey";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0xe;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  plVar5 = (longlong *)0x0;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_74 = 0;
  local_80 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x10;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
LAB_1405dcd35:
    local_a8 = *(undefined4 *)param_5;
    uStack_a4 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_a0 = *(undefined4 *)(param_5 + 1);
    uStack_9c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_60);
    }
    FUN_140041b80(&local_60,&local_a8);
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 != &local_60) goto LAB_1405dcd35;
  }
  local_48[0] = &local_60;
  plVar2 = (longlong *)FUN_140e634e0(param_1,param_2,&local_80,1,DAT_141a063c8,local_48);
  lVar4 = 0;
  uVar6 = 0xffffff;
  if (plVar2 != &local_b8) {
    local_a8 = (undefined4)*plVar2;
    uStack_a4 = *(undefined4 *)((longlong)plVar2 + 4);
    uStack_a0 = (undefined4)plVar2[1];
    uStack_9c = *(undefined4 *)((longlong)plVar2 + 0xc);
    FUN_140041b80(&local_b8,&local_a8);
    lVar4 = local_b8;
    uVar6 = uStack_ac;
  }
  local_88 = 0x12;
  iVar3 = 0;
  if ((uVar6 == 2) && (lVar4 != 0)) {
    iVar3 = *(int *)(lVar4 + 0x24);
  }
  dVar1 = (double)FUN_140e78f00((longlong)(iVar3 + -1));
  iVar3 = (int)dVar1;
  if (((uVar6 & 0xffffff) == 2) && (lVar4 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar4 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar4 + 0x24));
    }
    else {
      plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 8));
    }
    uVar7 = 0xffffff;
    if (plVar5 == &local_c8) goto LAB_1405dce43;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar5 = &local_b8;
  }
  local_a8 = (undefined4)*plVar5;
  uStack_a4 = *(undefined4 *)((longlong)plVar5 + 4);
  uStack_a0 = (undefined4)plVar5[1];
  uStack_9c = *(undefined4 *)((longlong)plVar5 + 0xc);
  FUN_140041b80(&local_c8,&local_a8);
  uVar7 = uStack_bc;
LAB_1405dce43:
  local_88 = 0x15;
  if (&local_c8 != param_3) {
    local_a8 = (undefined4)local_c8;
    uStack_a4 = local_c8._4_4_;
    uStack_a0 = uStack_c0;
    uStack_9c = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

