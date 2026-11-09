// gml_Script_InputPartySetParams @ 0x1403443b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPartySetParams
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  double dVar10;
  bool bVar11;
  undefined1 *local_f0;
  double dStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  double local_d0;
  undefined8 uStack_c8;
  double local_c0;
  undefined4 local_b4;
  double local_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  char *local_88;
  undefined4 local_80;
  double local_78;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  
  local_88 = "gml_Script_InputPartySetJoin";
  local_90 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_90;
  local_80 = 0x11;
  _eh_vector_constructor_iterator_(local_68,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar9 = 0xffffff;
  local_a4 = 0xffffff;
  local_b0 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  local_d4 = 0;
  local_e0 = 0;
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde4a8) &&
     (_Init_thread_header(&DAT_141dde4a8), DAT_141dde4a8 == -1)) {
    DAT_141dde4a0 = (longlong *)FUN_140e63aa0(DAT_1419f2678);
    _Init_thread_footer(&DAT_141dde4a8);
  }
  if (DAT_141ddc109 == '\0') {
    FUN_140e64380(DAT_141dde4a0,"gml_Script_InputPartySetJoin");
    FUN_140e64380(param_1,"gml_Script_InputPartySetJoin");
  }
  local_80 = 0x13;
  if (DAT_141ddc109 == '\0') {
    DAT_141ddc109 = '\x01';
    pdVar4 = (double *)(**(code **)(*DAT_141dde4a0 + 0x10))(DAT_141dde4a0,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde4a0);
    pdVar5 = (double *)gml_Script___InputPlugInExecuteCallbacks(param_1,param_2,&local_e0,0,0);
    if (pdVar5 != pdVar4) {
      local_d0 = *pdVar5;
      uStack_c8 = pdVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_d0);
    }
    FUN_140e60910(1);
  }
  local_80 = 0x15;
  pdVar4 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  cVar2 = FUN_140e491e0(puVar7);
  uVar8 = 0;
  if (cVar2 != '\0') {
    local_80 = 0x17;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 5;
    local_d0 = _DAT_1419df7a0;
    uStack_c8 = dRam00000001419df7a8;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_d0);
    local_f0 = local_68;
    gml_Script_InputSetHotswapCallback(param_1,param_2,&local_e0,1,&local_f0);
    goto LAB_14034480e;
  }
  local_80 = 0x1b;
  if (param_4 < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140344651:
    local_f0 = (undefined1 *)*pdVar5;
    dStack_e8 = pdVar5[1];
    FUN_140041b80(&local_b0,&local_f0);
    dVar10 = local_b0;
    uVar9 = local_a4;
  }
  else {
    pdVar5 = (double *)param_5[1];
    dVar10 = 0.0;
    if (pdVar5 != &local_b0) goto LAB_140344651;
  }
  if ((uVar9 & 0xffffff) == 3) {
    bVar11 = dVar10 == 0.0;
  }
  else {
    bVar11 = (uVar9 & 0xffffff) == 5;
  }
  if (bVar11) {
    uVar6 = gml_Script_InputPlayerGetBlocked(param_1,param_2,&local_e0,0,0);
    dStack_e8 = (double)((ulonglong)dStack_e8 & 0xffffffff);
    local_f0 = (undefined1 *)0x3ff0000000000000;
    iVar3 = FUN_140e851f0(uVar6,&local_f0,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_e8 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    uStack_c8 = (double)CONCAT44(0xd,(undefined4)uStack_c8);
    local_d0 = (double)(iVar3 != -2 && iVar3 < 1);
    pdVar5 = &local_d0;
    bVar1 = true;
    bVar11 = false;
  }
  else {
    local_70 = local_a8;
    local_6c = uVar9;
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) == 0) {
      local_78 = dVar10;
    }
    else {
      FUN_1400419b0(&local_78,&local_b0);
    }
    pdVar5 = &local_78;
    bVar1 = false;
    bVar11 = true;
  }
  cVar2 = FUN_140e491e0(pdVar5);
  if ((bVar11) && ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_78);
  }
  if ((bVar1) && ((1 << ((byte)((ulonglong)uStack_c8 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_d0);
  }
  if (cVar2 != '\0') {
    local_80 = 0x1d;
    local_a0 = 0;
    local_98 = 0;
    local_94 = 5;
    local_f0 = _DAT_1419df7c0;
    dStack_e8 = dRam00000001419df7c8;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_f0);
    local_f0 = local_68;
    gml_Script_InputSetHotswapCallback(param_1,param_2,&local_a0,1,&local_f0);
    uVar8 = local_94;
  }
LAB_14034480e:
  local_80 = 0x21;
  uVar6 = (**(code **)(*DAT_141dde4a0 + 8))(DAT_141dde4a0,DAT_1419fcb48);
  if ((param_4 < 1) || (pdVar4 = (double *)*param_5, pdVar4 != &local_c0)) {
    local_d0 = *pdVar4;
    uStack_c8 = pdVar4[1];
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_d0);
  }
  FUN_140e87930(uVar6,DAT_141a02258,0x80000000,&local_c0);
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_90;
  return param_3;
}

