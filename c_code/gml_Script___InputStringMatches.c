// gml_Script___InputStringMatches @ 0x1400d0db0

/* WARNING: Removing unreachable block (ram,0x0001400d118a) */

longlong *
gml_Script___InputStringMatches
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  double *pdVar4;
  undefined8 uVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 uVar8;
  double local_118;
  uint local_10c;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  double local_b0;
  undefined4 local_a4;
  double local_a0;
  undefined4 local_94;
  double local_90;
  undefined4 local_84;
  double local_80;
  uint local_78;
  undefined4 local_74;
  double *local_70;
  double *local_68;
  double *local_60;
  
  local_c0 = "gml_Script___InputStringContains";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 3;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_b0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_74 = 0;
  local_108 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_10c = 0;
  uVar6 = 0x3ff00000;
  local_118 = 1.0;
  local_b8 = 6;
  dStack_100 = (double)(ulonglong)local_78;
  local_cc = 7;
  local_d8 = CONCAT44(local_d8._4_4_,1);
  local_80 = local_108;
  FUN_1400462a0(&local_108,&local_d8);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  iVar1 = FUN_140e4a740(&local_108);
  if ((1 << ((byte)((ulonglong)dStack_100 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  do {
    if (iVar1 < 1) {
      local_b8 = 0xc;
      uVar6 = 0;
LAB_1400d116f:
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      *param_3 = (ulonglong)uVar6 << 0x20;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      _eh_vector_destructor_iterator_(&local_b0,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_c8;
      return param_3;
    }
    uVar8 = (undefined4)((ulonglong)pcVar7 >> 0x20);
    iVar1 = iVar1 + -1;
    local_b8 = 8;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    iVar2 = FUN_140e4a740(&local_118);
    if (iVar2 < param_4) {
      pdVar4 = (double *)param_5[iVar2];
      if (pdVar4 != &local_b0) goto LAB_1400d0f95;
    }
    else {
      pdVar4 = (double *)&DAT_1419df7b0;
LAB_1400d0f95:
      local_108 = *pdVar4;
      dStack_100 = pdVar4[1];
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      FUN_140041b80(&local_b0,&local_108);
    }
    local_70 = &local_b0;
    uVar5 = CONCAT44(uVar8,DAT_1419fcb18);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_f8,1,uVar5,&local_70);
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar4 != &local_a0) {
      local_108 = *pdVar4;
      dStack_100 = pdVar4[1];
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_108);
    }
    local_68 = &local_a0;
    if (param_4 < 1) {
      pdVar4 = (double *)&DAT_1419df7b0;
LAB_1400d1049:
      local_108 = *pdVar4;
      dStack_100 = pdVar4[1];
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      FUN_140041b80(&local_90,&local_108);
    }
    else {
      pdVar4 = (double *)*param_5;
      if (pdVar4 != &local_90) goto LAB_1400d1049;
    }
    local_60 = &local_90;
    pcVar7 = (code *)CONCAT44(uVar8,DAT_141a02d88);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_e8,2,pcVar7,&local_68);
    local_cc = 0;
    local_d8 = 0;
    iVar2 = FUN_140e851f0(uVar5,&local_d8,DAT_141955260,1);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (0 < iVar2) {
      local_b8 = 8;
      goto LAB_1400d116f;
    }
    local_b8 = 9;
    uVar3 = local_10c & 0xffffff;
    if (uVar3 == 0) {
LAB_1400d114e:
      local_118 = local_118 + 1.0;
    }
    else {
      if (uVar3 == 1) {
        local_118 = (double)FUN_140e4b060(&local_118);
        local_10c = 0;
        goto LAB_1400d114e;
      }
      if (uVar3 == 7) {
        local_118 = (double)CONCAT44(local_118._4_4_,local_118._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_118 = (double)((longlong)local_118 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_10c = 0;
          goto LAB_1400d114e;
        }
        FUN_140042910(&DAT_14172c3d8,&local_118,&local_118);
      }
    }
  } while( true );
}

