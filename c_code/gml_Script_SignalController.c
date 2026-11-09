// gml_Script_SignalController @ 0x1404a3860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_SignalController
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined1 auVar1 [12];
  bool bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  undefined4 uVar15;
  undefined8 uVar14;
  double local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong local_198;
  uint local_18c;
  double local_188;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_154;
  double local_150;
  int local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong uStack_100;
  longlong *local_f8;
  double *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  byte local_bc;
  longlong local_b8 [2];
  longlong local_a8 [2];
  double local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  
  local_170 = "gml_Script___remove_listener@anon@2139@SignalController@SIGNALS";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x46;
  uVar15 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_19c = 0;
  local_1a8 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x47;
  pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa278);
  if (pdVar9 != &local_c8) {
    local_118 = *pdVar9;
    uStack_110 = pdVar9[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
  }
  local_f0 = &local_c8;
  uVar14 = CONCAT44(uVar15,DAT_141a0aa48);
  pdVar9 = (double *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar14,&local_f0);
  uVar11 = extraout_XMM0_Qb;
  if (pdVar9 != &local_150) {
    local_118 = *pdVar9;
    uStack_110 = pdVar9[1];
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_118);
    uVar11 = extraout_XMM0_Qb_00;
  }
  local_168 = 0x48;
  auVar1._4_8_ = uVar11;
  auVar1._0_4_ = local_108._4_4_;
  auVar13._0_8_ = auVar1._0_8_ << 0x20;
  auVar13._8_4_ = (undefined4)uStack_100;
  auVar13._12_4_ = 0xd;
  uStack_110 = auVar13._8_8_;
  local_108 = 0;
  local_118 = 0.0;
  uStack_100 = (ulonglong)uStack_110;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  FUN_140041b80(&local_160,&local_118);
  local_168 = 0x49;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1ac = 0;
  local_1b8 = 0.0;
  bVar4 = true;
  do {
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
    iVar8 = 0;
    if (!bVar4) {
      local_168 = 0x49;
      uVar6 = local_1ac & 0xffffff;
      if (uVar6 != 0) {
        if (uVar6 != 1) {
          if (uVar6 == 7) {
            local_1b8 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_1b8 = (double)((longlong)local_1b8 + 1);
          }
          else {
            if (uVar6 == 0xd) goto LAB_1404a3ae8;
            FUN_140042910(&DAT_14172c3d8,&local_1b8,&local_1b8);
          }
          goto LAB_1404a3af7;
        }
        local_1b8 = (double)FUN_140e4b060(&local_1b8);
LAB_1404a3ae8:
        local_1ac = 0;
      }
      local_1b8 = local_1b8 + 1.0;
    }
LAB_1404a3af7:
    bVar4 = false;
    iVar7 = iVar8;
    if ((local_144 == 2) && (local_150 != 0.0)) {
      iVar7 = *(int *)((longlong)local_150 + 0x24);
    }
    local_8c = 0;
    local_98 = (double)iVar7;
    iVar7 = FUN_140e851f0(&local_1b8,&local_98,DAT_141955260,1);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (iVar7 == -2 || -1 < iVar7) {
      local_168 = 0x52;
      cVar5 = FUN_140e491e0(&local_160);
      bVar3 = (byte)*(undefined4 *)((longlong)param_3 + 0xc);
      if (cVar5 == '\0') {
        local_168 = 0x53;
        if ((1 << (bVar3 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        uVar11 = 6;
      }
      else {
        local_168 = 0x55;
        if ((1 << (bVar3 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        uVar11 = 3;
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 10;
      *param_3 = uVar11;
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_178;
      return param_3;
    }
    local_168 = 0x4a;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    local_140 = 0;
    local_138 = 0;
    local_134 = 5;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa278);
    local_f8 = (longlong *)&local_150;
    local_f0 = &local_1b8;
    if (plVar10 != local_b8) {
      local_128 = *plVar10;
      uStack_120 = plVar10[1];
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_128);
    }
    local_e8 = local_b8;
    uVar11 = CONCAT44(uVar15,DAT_141a03ca8);
    plVar10 = (longlong *)FUN_140e634e0(param_1,param_2,&local_140,2,uVar11,&local_f8);
    uVar15 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (plVar10 != local_a8) {
      local_128 = *plVar10;
      uStack_120 = plVar10[1];
      if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_128);
    }
    local_e0 = local_a8;
    uVar14 = CONCAT44(uVar15,DAT_141a01138);
    plVar10 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar14,&local_e8);
    if (plVar10 != &local_198) {
      local_128 = *plVar10;
      uStack_120 = plVar10[1];
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_128);
    }
    local_168 = 0x4b;
    if ((local_18c == 2) && (local_198 != 0)) {
      iVar8 = *(int *)(local_198 + 0x24);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    local_188 = (double)(iVar8 + -2);
    bVar2 = true;
    while( true ) {
      if (!bVar2) {
        local_168 = 0x4b;
        local_7c = 0;
        local_88 = 0x4000000000000000;
        FUN_1400462a0(&local_188,&local_88);
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
      }
      bVar2 = false;
      uStack_100 = uStack_100 & 0xffffffff;
      local_108 = 0;
      uVar6 = FUN_140e851f0(&local_188,&local_108,DAT_141955260,1);
      if ((1 << ((byte)(uStack_100 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if (0x7fffffff < uVar6) break;
      local_168 = 0x4c;
      if (param_4 < 1) {
        puVar12 = &DAT_1419df7b0;
      }
      else {
        puVar12 = (undefined8 *)*param_5;
      }
      iVar8 = FUN_140e4a740(&local_188);
      plVar10 = (longlong *)0x0;
      if (((local_18c & 0xffffff) == 2) && (local_198 != 0)) {
        if ((iVar8 < 0) || (*(int *)(local_198 + 0x24) <= iVar8)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                        *(undefined4 *)(local_198 + 0x24));
        }
        else {
          plVar10 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(local_198 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar10 = &local_198;
      }
      iVar8 = FUN_140e851f0(plVar10,puVar12,DAT_141955260,0);
      uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
      if (iVar8 == 0) {
        local_168 = 0x4d;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        local_f8 = &local_198;
        local_f0 = &local_188;
        local_128 = _DAT_1419e5f80;
        uStack_120 = uRam00000001419e5f88;
        if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_128);
        local_e8 = local_b8;
        uVar14 = CONCAT44(uVar15,DAT_1419fd808);
        FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar14,&local_f8);
        local_168 = 0x4e;
        local_118 = 1.0;
        uVar15 = SUB84(uStack_110,0);
        uStack_110 = (double)CONCAT44(0xd,uVar15);
        local_128 = 0x3ff0000000000000;
        uStack_120 = CONCAT44(0xd,uVar15);
        if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_160);
        }
        FUN_140041b80(&local_160,&local_128);
      }
    }
  } while( true );
}

