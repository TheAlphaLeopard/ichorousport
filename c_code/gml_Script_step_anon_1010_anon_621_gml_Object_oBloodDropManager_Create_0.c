// gml_Script_step_anon_1010_anon_621_gml_Object_oBloodDropManager_Create_0 @ 0x1406b61f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_step_anon_1010_anon_621_gml_Object_oBloodDropManager_Create_0
               (longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 uVar10;
  double **ppdVar11;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 local_19c;
  double local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  double local_148;
  undefined4 local_13c;
  double local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  double local_d0;
  uint uStack_c4;
  double *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  double *local_90;
  double *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_e0 = "gml_Object_oBloodDropManager_Create_0";
  local_d8 = 0;
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(&local_198,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  uStack_c4 = 0xffffff;
  local_d0 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_d8 = 1;
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5c48);
  FUN_140e609c0(param_1);
  pdVar6 = (double *)FUN_140e8da20(&local_48,param_1,0);
  if (pdVar6 != pdVar5) {
    local_1f8 = *pdVar6;
    uStack_1f0 = pdVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    FUN_140041b80(pdVar5,&local_1f8);
  }
  FUN_140e60910(1);
  local_d8 = 3;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268067e-304;
  local_1e8 = 7.291135926268067e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1e8);
  local_b8 = &local_198;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268068e-304;
  local_1e8 = 7.291135926268068e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1e8);
  local_b0 = local_188;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.29113592626807e-304;
  local_1e8 = 7.29113592626807e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1e8);
  local_a8 = local_178;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268071e-304;
  local_1e8 = 7.291135926268071e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1e8);
  local_a0 = local_168;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268062e-304;
  local_1e8 = 7.291135926268062e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1e8);
  local_98 = local_158;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268073e-304;
  local_1e8 = 7.291135926268073e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_1e8);
  local_90 = &local_148;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268507e-304;
  local_1e8 = 7.291135926268507e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1e8);
  local_88 = &local_138;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268509e-304;
  local_1e8 = 7.291135926268509e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1e8);
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.29113592626851e-304;
  local_1e8 = 7.29113592626851e-304;
  dStack_1e0 = uStack_1f0;
  local_80 = local_128;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1e8);
  local_78 = local_118;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268512e-304;
  local_1e8 = 7.291135926268512e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1e8);
  local_70 = local_108;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268513e-304;
  local_1e8 = 7.291135926268513e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1e8);
  local_68 = local_f8;
  uVar10 = CONCAT44(uVar4,DAT_1419fdca8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_1d8,0xb,uVar10,&local_b8);
  dVar7 = 0.0;
  uVar9 = 0xffffff;
  if (pdVar5 != &local_d0) {
    local_1e8 = *pdVar5;
    dStack_1e0 = pdVar5[1];
    FUN_140041b80(&local_d0,&local_1e8);
    dVar7 = local_d0;
    uVar9 = uStack_c4;
  }
  local_d8 = 4;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1bc = 0;
  local_1c8 = 0.0;
  bVar1 = true;
  do {
    uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (!bVar1) {
      local_d8 = 4;
      uVar2 = local_1bc & 0xffffff;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          if (uVar2 == 7) {
            local_1c8 = (double)CONCAT44(local_1c8._4_4_,local_1c8._0_4_ + 1);
          }
          else if (uVar2 == 10) {
            local_1c8 = (double)((longlong)local_1c8 + 1);
          }
          else {
            if (uVar2 == 0xd) goto LAB_1406b67ce;
            FUN_140042910(&DAT_14172c3d8,&local_1c8,&local_1c8);
          }
          goto LAB_1406b67dd;
        }
        local_1c8 = (double)FUN_140e4b060(&local_1c8);
LAB_1406b67ce:
        local_1bc = 0;
      }
      local_1c8 = local_1c8 + 1.0;
    }
LAB_1406b67dd:
    bVar1 = false;
    iVar3 = 0;
    if ((uVar9 == 2) && (dVar7 != 0.0)) {
      iVar3 = *(int *)((longlong)dVar7 + 0x24);
    }
    uStack_1f0 = (double)((ulonglong)uStack_1f0 & 0xffffffff);
    local_1f8 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_1c8,&local_1f8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)uStack_1f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (iVar3 == -2 || -1 < iVar3) break;
    local_d8 = 5;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    iVar3 = FUN_140e4a740(&local_1c8);
    pdVar5 = (double *)0x0;
    if (((uVar9 & 0xffffff) == 2) && (dVar7 != 0.0)) {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar7 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar7 + 0x24));
      }
      else {
        pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar7 + 8));
      }
      if (pdVar5 != &local_198) goto LAB_1406b68e7;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar5 = &local_d0;
LAB_1406b68e7:
      local_1e8 = *pdVar5;
      dStack_1e0 = pdVar5[1];
      if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1e8);
    }
    local_b8 = &local_198;
    local_1e8 = _DAT_141dc6800;
    dStack_1e0 = dRam0000000141dc6808;
    if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1e8);
    local_b0 = local_188;
    local_1e8 = _DAT_1419df7a0;
    dStack_1e0 = (double)uRam00000001419df7a8;
    if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1e8);
    local_a8 = local_178;
    local_1e8 = _DAT_141dc6800;
    dStack_1e0 = dRam0000000141dc6808;
    if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1e8);
    local_a0 = local_168;
    uVar10 = CONCAT44(uVar4,DAT_141a0a2e8);
    FUN_140e634e0(param_1,param_2,&local_1d8,4,uVar10,&local_b8);
  } while( true );
  local_d8 = 7;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a031a8);
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268067e-304;
  local_1e8 = 7.291135926268067e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1e8);
  local_b8 = &local_198;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268068e-304;
  local_1e8 = 7.291135926268068e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1e8);
  local_b0 = local_188;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.29113592626807e-304;
  local_1e8 = 7.29113592626807e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1e8);
  local_a8 = local_178;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268071e-304;
  local_1e8 = 7.291135926268071e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1e8);
  local_a0 = local_168;
  uVar2 = (int)(DAT_1419ef3f8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar2 == 0xf) {
    uVar8 = 0x4000004;
  }
  else {
    uVar8 = (ulonglong)(uVar2 | 0x1000000);
  }
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = (double)(uVar8 << 0x20 | (ulonglong)(DAT_1419ef3f8 & 0xffffff));
  dStack_1e0 = uStack_1f0;
  local_1e8 = local_1f8;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1e8);
  local_98 = local_158;
  uVar10 = CONCAT44(uVar4,DAT_1419fdca8);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_1b8,4,uVar10,&local_b8);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (pdVar6 != &local_148) {
    local_1e8 = *pdVar6;
    dStack_1e0 = pdVar6[1];
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1e8);
  }
  local_90 = &local_148;
  FUN_140e609c0(param_1);
  uVar10 = CONCAT44(uVar4,DAT_1419fd6d8);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar10,&local_98);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (pdVar6 != pdVar5) {
    local_1e8 = *pdVar6;
    dStack_1e0 = pdVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    FUN_140041b80(pdVar5,&local_1e8);
  }
  FUN_140e60910(1);
  local_d8 = 8;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a030e8);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268507e-304;
  local_1e8 = 7.291135926268507e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1e8);
  local_b8 = &local_198;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268509e-304;
  local_1e8 = 7.291135926268509e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1e8);
  local_b0 = local_188;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.29113592626851e-304;
  local_1e8 = 7.29113592626851e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1e8);
  local_a8 = local_178;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268512e-304;
  local_1e8 = 7.291135926268512e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1e8);
  local_a0 = local_168;
  uStack_1f0 = (double)CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = 7.291135926268513e-304;
  local_1e8 = 7.291135926268513e-304;
  dStack_1e0 = uStack_1f0;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1e8);
  iVar3 = DAT_1419ef4e8;
  local_98 = local_158;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_13c = 0;
  local_148 = (double)iVar3;
  local_90 = &local_148;
  uVar10 = CONCAT44(uVar4,DAT_1419fdca8);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_1b8,5,uVar10,&local_b8);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (pdVar6 != &local_138) {
    local_1e8 = *pdVar6;
    dStack_1e0 = pdVar6[1];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1e8);
  }
  local_88 = &local_138;
  ppdVar11 = &local_90;
  uVar8 = CONCAT44(uVar4,DAT_1419fd6d8);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar8,ppdVar11);
  if (pdVar6 != &local_1a8) {
    local_1e8 = *pdVar6;
    dStack_1e0 = pdVar6[1];
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1e8);
  }
  FUN_140e87440(&local_1a8,DAT_1419ef268,0x80000000,&local_58,uVar8 & 0xffffffffffffff00,
                (ulonglong)ppdVar11 & 0xffffffffffffff00);
  local_1e8 = _DAT_1419e76b0;
  dStack_1e0 = dRam00000001419e76b8;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1e8);
  local_80 = local_128;
  FUN_140e609c0(param_1);
  dVar7 = 0.0;
  switch(local_19c) {
  case 6:
    dVar7 = local_1a8;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_1a8 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar4 = FUN_140e4a8b0(&local_1a8);
    dVar7 = (double)FUN_140e87250(uVar4);
  }
  pdVar6 = (double *)FUN_140e63610(dVar7,param_2,&local_1b8,1,&local_58,&local_80);
  if (pdVar6 != pdVar5) {
    local_1e8 = *pdVar6;
    dStack_1e0 = pdVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    FUN_140041b80(pdVar5,&local_1e8);
  }
  FUN_140e60910(1);
  local_d8 = 0xb;
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1dc60);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1f8,gml_Script_anon_5819_gml_Object_oBloodDropManager_Create_0,0);
  if (&local_1f8 != pdVar5) {
    local_1e8 = local_1f8;
    dStack_1e0 = uStack_1f0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    FUN_140041b80(pdVar5,&local_1e8);
  }
  if ((1 << ((byte)((ulonglong)uStack_1f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140e60910(1);
  local_d8 = 0x101;
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1db80);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1f8,gml_Object_oBloodDropManager_Draw_0,param_1);
  if (&local_1f8 != pdVar5) {
    local_1e8 = local_1f8;
    dStack_1e0 = uStack_1f0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    FUN_140041b80(pdVar5,&local_1e8);
  }
  if ((1 << ((byte)((ulonglong)uStack_1f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,0xb,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return;
}

