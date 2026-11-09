// gml_Script___Update_anon_7371___InputClassPlayer___InputClassPlayer @ 0x140047c50

undefined8 *
gml_Script___Update_anon_7371___InputClassPlayer___InputClassPlayer
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  undefined4 uVar11;
  longlong local_120;
  uint local_114;
  double local_110;
  uint local_104;
  undefined8 local_f8;
  uint uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  uint uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  local_e8 = DAT_141dc7a50;
  bVar3 = false;
  bVar2 = false;
  local_e0 = 
  "gml_Script__funcUpdateThresholdType@anon@5315@__UpdateClusterThresholds@anon@5254@__InputClassPlayer@__InputClassPlayer"
  ;
  DAT_141dc7a50 = &local_e8;
  local_114 = 0xffffff;
  local_120 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  uStack_ec = 0;
  local_f8 = 0.0;
  local_104 = 0;
  local_110 = 0.0;
  if (param_4 < 1) {
    plVar9 = &DAT_1419df7b0;
  }
  else {
    plVar9 = (longlong *)*param_5;
  }
  iVar10 = 0;
  if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
    iVar10 = *(int *)(*plVar9 + 0x24);
  }
joined_r0x000140047d21:
  do {
    if (iVar10 < 1) {
      local_d8 = 0xa5;
      if (&local_f8 != param_3) {
        local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
        local_98 = (uint)local_f8;
        uStack_94 = local_f8._4_4_;
        uStack_8c = uStack_ec;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_98);
      }
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      DAT_141dc7a50 = (undefined8 *)local_e8;
      return param_3;
    }
    iVar10 = iVar10 + -1;
    local_d8 = 0x9a;
    iVar4 = FUN_140e4a740(&local_110);
    if (param_4 < 1) {
      plVar9 = &DAT_1419df7b0;
    }
    else {
      plVar9 = (longlong *)*param_5;
    }
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar9 != &local_120) {
      local_88 = (longlong *)*plVar9;
      uStack_80 = (undefined4)plVar9[1];
      uStack_7c = *(undefined4 *)((longlong)plVar9 + 0xc);
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      FUN_140041b80(&local_120,&local_88);
    }
    local_d8 = 0x9c;
    iVar4 = FUN_140e851f0(&local_120,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar4 != 0) {
      local_d8 = 0x9e;
      if ((local_114 & 0xffffff) == 0) {
        uVar11 = (undefined4)local_120;
      }
      else {
        uVar11 = FUN_140e4b060(&local_120);
      }
      lVar1 = FUN_140e78d00(uVar11);
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      local_114 = 0;
      local_d8 = 0x9f;
      local_c4 = 0;
      local_d0 = 0x40e0022000000000;
      local_120 = lVar1;
      iVar4 = FUN_140e851f0(&local_120,&local_d0,DAT_141955260,0);
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      if (iVar4 == 0) {
LAB_140047f30:
        local_a4 = 0;
        local_b0 = 0x3ff0000000000000;
        puVar6 = &local_b0;
        bVar3 = true;
      }
      else {
        local_b4 = 0;
        local_c0 = 0x40e0024000000000;
        iVar4 = FUN_140e851f0(&local_120,&local_c0,DAT_141955260,0);
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        if (iVar4 == 0) goto LAB_140047f30;
        local_88 = &local_120;
        puVar6 = (undefined8 *)FUN_140048170(&local_88,&local_98);
        bVar2 = true;
      }
      uVar5 = uStack_ec & 0xffffff;
      if (uVar5 == 0) {
LAB_140047f7f:
        uVar8 = (ulonglong)local_f8;
        uVar7 = FUN_140e4a8b0();
        local_f8 = (double)(uVar7 | uVar8);
        uStack_ec = 10;
      }
      else if (uVar5 == 7) {
        uVar5 = FUN_140e4a740();
        local_f8 = (double)CONCAT44(local_f8._4_4_,(uint)local_f8 | uVar5);
      }
      else if (uVar5 == 10) {
        uVar7 = FUN_140e4a8b0();
        local_f8 = (double)((ulonglong)local_f8 | uVar7);
      }
      else {
        if (uVar5 == 0xd) {
          uStack_ec = 0;
          goto LAB_140047f7f;
        }
        FUN_140042910(&DAT_14172c43c,&local_f8,puVar6);
      }
      if ((bVar2) && (bVar2 = false, (1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_98);
      }
      if ((bVar3) && (bVar3 = false, (1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_b0);
      }
    }
    local_d8 = 0xa2;
    uVar5 = local_104 & 0xffffff;
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        local_110 = (double)FUN_140e4b060(&local_110);
        local_104 = 0;
        goto LAB_140048057;
      }
      if (uVar5 == 7) {
        local_110 = (double)CONCAT44(local_110._4_4_,local_110._0_4_ + 1);
      }
      else if (uVar5 == 10) {
        local_110 = (double)((longlong)local_110 + 1);
      }
      else {
        if (uVar5 == 0xd) {
          local_104 = 0;
          goto LAB_140048057;
        }
        FUN_140042910(&DAT_14172c3d8,&local_110,&local_110);
      }
      goto joined_r0x000140047d21;
    }
LAB_140048057:
    local_110 = local_110 + 1.0;
  } while( true );
}

