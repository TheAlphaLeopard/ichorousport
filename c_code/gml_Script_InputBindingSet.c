// gml_Script_InputBindingSet @ 0x1402f8b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script_InputBindingSet
                   (longlong *param_1,undefined8 param_2,double *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  uint local_res20;
  undefined4 uVar15;
  undefined8 uVar14;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  double local_170;
  double dStack_168;
  undefined4 local_160;
  double local_158;
  byte local_14c;
  double local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  double local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  uint local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  double local_e0;
  uint uStack_d4;
  double local_d0;
  double dStack_c8;
  double *local_c0;
  double *local_b8;
  undefined1 *local_b0;
  double *local_a8;
  undefined1 *local_a0;
  double local_98;
  uint uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_180 = "gml_Script_InputBindingGet";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0xc;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_88,param_4,4,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_f8 = 0xffffff;
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_res20 = 0xffffff;
  uStack_d4 = 0xffffff;
  local_e0 = 0.0;
  local_18c = 0;
  local_198 = 0;
  local_160 = 0;
  local_e4 = 0;
  local_f0 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddf6c) &&
     (_Init_thread_header(&DAT_141dddf6c), DAT_141dddf6c == -1)) {
    DAT_141dddf70 = (longlong *)FUN_140e63aa0(DAT_1419ef858);
    _Init_thread_footer(&DAT_141dddf6c);
  }
  local_178 = 0xc;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 3) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[2];
  }
  iVar3 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_178 = 0xc;
    if ((int)local_88[0] < 3) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_80[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
  }
  if ((int)local_88[0] < 4) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[3];
  }
  iVar3 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_88[0] < 4) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_80[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
  }
  if (DAT_141ddc0af == '\0') {
    FUN_140e64380(DAT_141dddf70,"gml_Script_InputBindingGet");
    FUN_140e64380(local_res8,"gml_Script_InputBindingGet");
  }
  local_178 = 0xe;
  if (DAT_141ddc0af == '\0') {
    DAT_141ddc0af = '\x01';
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    pdVar5 = (double *)(**(code **)(*DAT_141dddf70 + 0x10))(DAT_141dddf70,DAT_141a026b8);
    FUN_140e609c0(DAT_141dddf70);
    uVar15 = 0;
    pdVar6 = (double *)gml_Script___InputTrace(local_res8,local_res10,&local_198,0,0);
    if (pdVar6 != pdVar5) {
      local_1a8 = *pdVar6;
      dStack_1a0 = pdVar6[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      FUN_140041b80(pdVar5,&local_1a8);
    }
    FUN_140e60910(1);
  }
  local_178 = 5;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((int)local_88[0] < 4) {
    pdVar5 = &DAT_1419df7b0;
LAB_1402f8ed9:
    local_1a8 = *pdVar5;
    dStack_1a0 = pdVar5[1];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1a8);
  }
  else {
    pdVar5 = (double *)local_80[3];
    if (pdVar5 != &local_158) goto LAB_1402f8ed9;
  }
  local_c0 = &local_158;
  uVar14 = CONCAT44(uVar15,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_198,1,uVar14,&local_c0);
  uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_178 = 8;
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 5;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    if ((int)local_88[0] < 4) {
      pdVar5 = &DAT_1419df7b0;
LAB_1402f8fa8:
      local_1a8 = *pdVar5;
      dStack_1a0 = pdVar5[1];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1a8);
    }
    else {
      pdVar5 = (double *)local_80[3];
      if (pdVar5 != &local_148) goto LAB_1402f8fa8;
    }
    local_b8 = &local_148;
    local_1a8 = _DAT_141dcf4c8;
    dStack_1a0 = (double)uRam0000000141dcf4d0;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1a8);
    local_b0 = local_138;
    pdVar5 = (double *)
             FUN_140e634e0(local_res8,local_res10,&local_108,1,CONCAT44(uVar15,DAT_1419fdc58),
                           &local_b8);
    if (pdVar5 != &local_128) {
      local_1a8 = *pdVar5;
      dStack_1a0 = pdVar5[1];
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1a8);
    }
    local_a8 = &local_128;
    local_1a8 = _DAT_141dcf4d8;
    dStack_1a0 = dRam0000000141dcf4e0;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1a8);
    local_a0 = local_118;
    FUN_14008e020(local_res8,local_res10,&local_f0,3,&local_b0);
    local_160 = local_e4;
  }
  local_178 = 0xc;
  if ((int)local_88[0] < 4) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[3];
  }
  dStack_1a0 = (double)((ulonglong)dStack_1a0 & 0xffffffff);
  local_1a8 = 1.0;
  uVar4 = FUN_140e851f0(puVar9,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)dStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (uVar4 < 0x80000000) {
    local_178 = 0x12;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_1a8 = _DAT_141dcf508;
    dStack_1a0 = (double)uRam0000000141dcf510;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1a8);
    local_c0 = &local_158;
    if ((int)local_88[0] < 4) {
      pdVar5 = &DAT_1419df7b0;
LAB_1402f91f0:
      local_1a8 = *pdVar5;
      dStack_1a0 = pdVar5[1];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1a8);
    }
    else {
      pdVar5 = (double *)local_80[3];
      if (pdVar5 != &local_148) goto LAB_1402f91f0;
    }
    local_b8 = &local_148;
    local_1a8 = _DAT_141dcf4e8;
    dStack_1a0 = (double)uRam0000000141dcf4f0;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1a8);
    local_b0 = local_138;
    local_1a8 = _DAT_1419e3d70;
    dStack_1a0 = (double)uRam00000001419e3d78;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1a8);
    local_a8 = &local_128;
    local_1a8 = _DAT_141dcf518;
    dStack_1a0 = (double)uRam0000000141dcf520;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1a8);
    local_a0 = local_118;
    FUN_14008e020(local_res8,local_res10,&local_198,5,&local_c0);
  }
  local_178 = 0x17;
  if ((int)local_88[0] < 4) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[3];
  }
  dStack_1a0 = (double)((ulonglong)dStack_1a0 & 0xffffffff);
  local_1a8 = 0.0;
  iVar3 = FUN_140e851f0(puVar9,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)dStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_178 = 0x18;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_170 = _DAT_141dcf508;
    dStack_168 = (double)uRam0000000141dcf510;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_170);
    local_c0 = &local_158;
    if ((int)local_88[0] < 4) {
      pdVar5 = &DAT_1419df7b0;
LAB_1402f93f5:
      local_170 = *pdVar5;
      dStack_168 = pdVar5[1];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_170);
    }
    else {
      pdVar5 = (double *)local_80[3];
      if (pdVar5 != &local_148) goto LAB_1402f93f5;
    }
    local_b8 = &local_148;
    local_170 = _DAT_141dcf4f8;
    dStack_168 = dRam0000000141dcf500;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_170);
    local_b0 = local_138;
    FUN_14008e020(local_res8,local_res10,&local_198,3,&local_c0);
  }
  local_178 = 0x12;
  plVar8 = (longlong *)(**(code **)(*DAT_141dddf70 + 8))(DAT_141dddf70,DAT_141a026b8);
  if ((int)local_88[0] < 4) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[3];
  }
  iVar3 = FUN_140e4a740(puVar9);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,plVar8);
  if (iVar3 < 1) {
    FUN_140e63970(local_78,&local_res8,&local_res10);
    uVar12 = local_f8;
    uVar4 = local_f8;
    goto LAB_1402f98c7;
  }
  local_178 = 0x14;
  if ((int)local_88[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_80;
  }
  cVar2 = FUN_140e491e0(puVar9);
  if (cVar2 == '\0') {
    pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4d8);
    dStack_168 = pdVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_170 = *pdVar5;
    }
    else {
      FUN_1400419b0(&local_170,pdVar5);
    }
    pdVar5 = &local_170;
    uVar4 = 10;
  }
  else {
    pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4c8);
    dStack_1a0 = pdVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_1a8 = *pdVar5;
    }
    else {
      FUN_1400419b0(&local_1a8,pdVar5);
    }
    pdVar5 = &local_1a8;
    uVar4 = 5;
  }
  local_d0 = *pdVar5;
  dStack_c8 = pdVar5[1];
  local_res18 = uVar4;
  FUN_140041b80(&local_98,&local_d0);
  if (((uVar4 & 2) != 0) &&
     (uVar4 = uVar4 & 0xfffffffd, local_res18 = uVar4,
     (1 << ((byte)((ulonglong)dStack_168 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_170);
  }
  if (((uVar4 & 1) != 0) && ((1 << ((byte)((ulonglong)dStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1a8);
  }
  local_178 = 0x15;
  if ((int)local_88[0] < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[1];
  }
  iVar3 = FUN_140e4a740(puVar9);
  uVar12 = uStack_8c;
  pdVar5 = (double *)0x0;
  if (((uStack_8c & 0xffffff) == 2) && (local_98 != 0.0)) {
    if ((iVar3 < 0) || (*(int *)((longlong)local_98 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)((longlong)local_98 + 0x24));
    }
    else {
      pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)local_98 + 8));
    }
    dVar13 = 0.0;
    if (pdVar5 != &local_e0) goto LAB_1402f96cf;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar5 = &local_98;
LAB_1402f96cf:
    local_d0 = *pdVar5;
    dStack_c8 = pdVar5[1];
    FUN_140041b80(&local_e0,&local_d0);
    local_res20 = uStack_d4;
    dVar13 = local_e0;
  }
  local_178 = 0x17;
  if ((int)local_88[0] < 3) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[2];
  }
  dStack_1a0 = (double)((ulonglong)dStack_1a0 & 0xffffffff);
  local_1a8 = 0.0;
  iVar3 = FUN_140e851f0(puVar9,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)dStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar3 == -2 || -1 < iVar3) {
    iVar3 = 0;
    if ((local_res20 == 2) && (dVar13 != 0.0)) {
      iVar3 = *(int *)((longlong)dVar13 + 0x24);
    }
    if ((int)local_88[0] < 3) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_80[2];
    }
    dStack_1a0 = (double)((ulonglong)dStack_1a0 & 0xffffffff);
    local_1a8 = (double)iVar3;
    uVar4 = FUN_140e851f0(puVar9,&local_1a8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if (0x7fffffff < uVar4) {
      local_178 = 0x18;
      if (2 < (int)local_88[0]) {
        puVar10 = (undefined8 *)local_80[2];
      }
      iVar3 = FUN_140e4a740(puVar10);
      uVar4 = local_res20;
      pdVar5 = (double *)0x0;
      if (((local_res20 & 0xffffff) == 2) && (dVar13 != 0.0)) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar13 + 0x24));
        }
        else {
          pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar5 = &local_e0;
      }
      if (pdVar5 != param_3) {
        local_d0 = *pdVar5;
        dStack_c8 = pdVar5[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_d0);
      }
      goto LAB_1402f98c7;
    }
  }
  local_178 = 0x17;
  if (param_3 != &DAT_1419df7b0) {
    local_d0 = DAT_1419df7b0;
    dStack_c8 = _DAT_1419df7b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d0);
  }
  uVar4 = local_res20;
LAB_1402f98c7:
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_160 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,5,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar10 = local_80;
    do {
      puVar9 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

