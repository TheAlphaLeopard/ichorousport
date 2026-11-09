// gml_Script_InputTriggerEffectSetPause @ 0x14036bf70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputTriggerEffectSetPause
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar14;
  double **ppdVar13;
  ulonglong in_stack_fffffffffffffeb0;
  double **ppdVar15;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  undefined4 local_10c;
  double local_108;
  byte local_fc;
  double local_f8;
  byte local_ec;
  double local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  double *local_90;
  double *local_88;
  double *local_80;
  double *local_78;
  undefined1 *local_70;
  double local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_a0 = "gml_Script_InputTriggerEffectOff";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 10;
  FUN_140041df0(local_48,param_4,2,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0.0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_13c = 0;
  local_148 = 0;
  local_11c = 0;
  local_128 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde760) &&
     (_Init_thread_header(&DAT_141dde760), DAT_141dde760 == -1)) {
    DAT_141dde758 = (longlong *)FUN_140e63aa0(DAT_1419f3918);
    _Init_thread_footer(&DAT_141dde760);
  }
  local_98 = 10;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[1];
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_98 = 10;
    if ((int)local_48[0] < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_40[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  if (DAT_141ddc13c == '\0') {
    FUN_140e64380(DAT_141dde758,"gml_Script_InputTriggerEffectOff");
    FUN_140e64380(param_1,"gml_Script_InputTriggerEffectOff");
  }
  local_98 = 0xc;
  if (DAT_141ddc13c == '\0') {
    DAT_141ddc13c = '\x01';
    pdVar5 = (double *)(**(code **)(*DAT_141dde758 + 0x10))(DAT_141dde758,DAT_141a026b8);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar12 = 0;
    uVar6 = gml_Script___InputVerbGroupsConfig(param_1,param_2,&local_148,0,0);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_68,uVar12,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    uVar14 = (undefined4)(uVar12 >> 0x20);
    FUN_140e609c0(DAT_141dde758);
    if (&local_68 != pdVar5) {
      dStack_130 = (double)CONCAT44(uStack_5c,uStack_60);
      local_138 = local_68;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      FUN_140041b80(pdVar5,&local_138);
    }
    FUN_140e60910(1);
  }
  local_98 = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_48[0] < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_14036c275:
    local_138 = *pdVar5;
    dStack_130 = pdVar5[1];
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  else {
    pdVar5 = (double *)local_40[1];
    if (pdVar5 != &local_118) goto LAB_14036c275;
  }
  local_90 = &local_118;
  ppdVar15 = &local_90;
  ppdVar13 = (double **)CONCAT44(uVar14,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,ppdVar13,ppdVar15);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_98 = 10;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    uVar14 = (undefined4)((ulonglong)ppdVar13 >> 0x20);
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    if ((int)local_48[0] < 2) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_14036c35f:
      local_138 = *pdVar5;
      dStack_130 = pdVar5[1];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    else {
      pdVar5 = (double *)local_40[1];
      if (pdVar5 != &local_108) goto LAB_14036c35f;
    }
    local_88 = &local_108;
    local_138 = _DAT_141dd1838;
    dStack_130 = (double)uRam0000000141dd1840;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
    local_80 = &local_f8;
    ppdVar15 = &local_88;
    pdVar5 = (double *)
             FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar14,DAT_1419fdc58),ppdVar15);
    if (pdVar5 != &local_e8) {
      local_138 = *pdVar5;
      dStack_130 = pdVar5[1];
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_138);
    }
    local_78 = &local_e8;
    local_138 = _DAT_141dd1868;
    dStack_130 = dRam0000000141dd1870;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_70 = local_d8;
    ppdVar13 = &local_80;
    FUN_14008e020(param_1,param_2,&local_128,3,ppdVar13);
  }
  local_98 = 0x10;
  if ((int)local_48[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[1];
  }
  dStack_130 = (double)((ulonglong)dStack_130 & 0xffffffff);
  local_138 = 1.0;
  uVar4 = FUN_140e851f0(puVar8,&local_138,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)dStack_130 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (uVar4 < 0x80000000) {
    local_98 = 0x14;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_138 = _DAT_141dd1848;
    dStack_130 = (double)uRam0000000141dd1850;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
    local_90 = &local_118;
    if ((int)local_48[0] < 2) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_14036c598:
      local_138 = *pdVar5;
      dStack_130 = pdVar5[1];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    else {
      pdVar5 = (double *)local_40[1];
      if (pdVar5 != &local_108) goto LAB_14036c598;
    }
    local_88 = &local_108;
    local_138 = _DAT_141dd1878;
    dStack_130 = (double)uRam0000000141dd1880;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
    local_80 = &local_f8;
    local_138 = _DAT_1419e44b0;
    dStack_130 = (double)uRam00000001419e44b8;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
    local_78 = &local_e8;
    local_138 = _DAT_141dd1888;
    dStack_130 = (double)uRam0000000141dd1890;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_70 = local_d8;
    ppdVar13 = &local_90;
    FUN_14008e020(param_1,param_2,&local_148,5,ppdVar13);
  }
  local_98 = 0x14;
  if ((int)local_48[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[1];
  }
  dStack_130 = (double)((ulonglong)dStack_130 & 0xffffffff);
  local_138 = 0.0;
  iVar3 = FUN_140e851f0(puVar8,&local_138,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)dStack_130 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_98 = 0x14;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_c8 = _DAT_141dd1848;
    dStack_c0 = (double)uRam0000000141dd1850;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_c8);
    local_90 = &local_118;
    if ((int)local_48[0] < 2) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_14036c79a:
      local_c8 = *pdVar5;
      dStack_c0 = pdVar5[1];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_c8);
    }
    else {
      pdVar5 = (double *)local_40[1];
      if (pdVar5 != &local_108) goto LAB_14036c79a;
    }
    local_88 = &local_108;
    local_c8 = _DAT_141dd1858;
    dStack_c0 = dRam0000000141dd1860;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_c8);
    local_80 = &local_f8;
    ppdVar13 = &local_90;
    FUN_14008e020(param_1,param_2,&local_148,3,ppdVar13);
  }
  local_98 = 0x10;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  plVar7 = (longlong *)(**(code **)(*DAT_141dde758 + 8))(DAT_141dde758,DAT_141a026b8);
  if ((int)local_48[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[1];
  }
  iVar3 = FUN_140e4a740(puVar8);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar9 = plVar7;
  }
  uVar12 = (ulonglong)ppdVar13 & 0xffffffffffffff00;
  FUN_140e87440(plVar9,DAT_141a03df8,0x80000000,&local_58,uVar12,
                (ulonglong)ppdVar15 & 0xffffffffffffff00);
  iVar3 = DAT_1419f3928;
  uVar14 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = (double)iVar3;
  local_90 = &local_118;
  if ((int)local_48[0] < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*local_40;
    if (pdVar5 == &local_108) goto LAB_14036c9b4;
  }
  local_c8 = *pdVar5;
  dStack_c0 = pdVar5[1];
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_c8);
LAB_14036c9b4:
  local_88 = &local_108;
  pdVar5 = (double *)
           FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar14,DAT_1419fd6d8),&local_90);
  if (pdVar5 != &local_f8) {
    local_c8 = *pdVar5;
    dStack_c0 = pdVar5[1];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_c8);
  }
  local_80 = &local_f8;
  local_c8 = _DAT_1419df7c0;
  dStack_c0 = (double)uRam00000001419df7c8;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_c8);
  local_78 = &local_e8;
  if (1 < (int)local_48[0]) {
    puVar10 = (undefined8 *)local_40[1];
  }
  iVar3 = FUN_140e4a740(puVar10);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uVar6 = FUN_140069500(plVar7);
  FUN_140e63610(uVar6,param_2,&local_148,3,&local_58,&local_88);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar10 = local_40;
    do {
      puVar8 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

