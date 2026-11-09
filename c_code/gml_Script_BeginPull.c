// gml_Script_BeginPull @ 0x140230a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_BeginPull
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  double *pdVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  code *pcVar15;
  undefined8 ***pppuVar16;
  undefined8 uVar17;
  double local_1a8;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 *local_178;
  uint uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  double local_140;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *local_108;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  undefined4 local_ec;
  undefined4 local_e8 [3];
  undefined4 local_dc;
  undefined1 local_d8 [12];
  undefined4 local_cc;
  undefined1 local_c8 [12];
  undefined4 local_bc;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  undefined8 **local_a8;
  double *local_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  
  local_160 = "gml_Script_AudioPlaySwordBurst";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 2;
  FUN_140041df0(local_68,param_4,1,param_5);
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_108,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = (undefined8 *)0x0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_134 = 0xffffff;
  local_140 = 0.0;
  local_6c = 0;
  uVar13 = 0;
  uVar14 = 0;
  local_78 = 0;
  local_18c = 0;
  local_198 = 0;
  local_144 = 0;
  local_150 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 2;
  pdVar9 = (double *)&DAT_1419df7b0;
  uVar10 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_60;
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_158 = 2;
    if ((int)local_68[0] < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0x4000000000000000;
  }
  local_158 = 3;
  ppuVar5 = (undefined8 **)FUN_140e8da20(&local_78,param_1,0);
  if (ppuVar5 != &local_178) {
    local_118 = *ppuVar5;
    uStack_110 = *(undefined4 *)(ppuVar5 + 1);
    uStack_10c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_118);
  }
  local_158 = 4;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_1a8 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_158 = 4;
      uVar4 = local_19c & 0xffffff;
      if (uVar4 == 0) {
LAB_140230cd3:
        local_1a8 = (double)CONCAT44(uVar14,uVar13) + 1.0;
      }
      else if (uVar4 == 1) {
        local_1a8 = (double)FUN_140e4b060(&local_1a8);
        local_1a8 = local_1a8 + 1.0;
        local_19c = 0;
      }
      else if (uVar4 == 7) {
        local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_1a8 = (double)((longlong)local_1a8 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_19c = 0;
          goto LAB_140230cd3;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1a8,&local_1a8);
      }
    }
    bVar2 = false;
    uStack_10c = 0;
    local_118 = (undefined8 *)0x4026000000000000;
    iVar3 = FUN_140e851f0(&local_1a8,&local_118,DAT_141955260,1);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar3 == -2 || -1 < iVar3) break;
    local_158 = 6;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    local_150 = 0;
    local_148 = 0;
    local_144 = 5;
    uStack_11c = DAT_141dcdde4;
    uStack_120 = DAT_141dcdde0;
    if ((1 << ((byte)DAT_141dcdde4 & 0x1f) & 0x46U) == 0) {
      local_128 = DAT_141dcddd8;
    }
    else {
      FUN_1400419b0(&local_128,&DAT_141dcddd8);
    }
    uVar13 = uStack_11c;
    local_188 = (undefined4)local_128;
    uStack_184 = local_128._4_4_;
    uStack_180 = uStack_120;
    uStack_17c = uStack_11c;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_188);
    if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_a8 = &local_108;
    local_a0 = &local_1a8;
    pppuVar16 = &local_a8;
    puVar6 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_150,2,pppuVar16);
    uVar13 = (undefined4)((ulonglong)pppuVar16 >> 0x20);
    if (puVar6 != local_e8) {
      local_188 = *puVar6;
      uStack_184 = puVar6[1];
      uStack_180 = puVar6[2];
      uStack_17c = puVar6[3];
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_188);
    }
    local_98 = local_e8;
    uVar14 = FUN_140e4a740(&local_1a8);
    puVar6 = (undefined4 *)FUN_140e48e40(&local_178,uVar14);
    FUN_140e609c0(*local_178);
    pcVar15 = (code *)CONCAT44(uVar13,DAT_141a086f8);
    puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_198,1,pcVar15,&local_98);
    if (puVar7 != puVar6) {
      local_188 = *puVar7;
      uStack_184 = puVar7[1];
      uStack_180 = puVar7[2];
      uStack_17c = puVar7[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_188);
    }
    FUN_140e60910(1);
    uVar13 = SUB84(local_1a8,0);
    uVar14 = (undefined4)((ulonglong)local_1a8 >> 0x20);
  } while( true );
  local_158 = 10;
  if (0 < (int)local_68[0]) {
    pdVar9 = (double *)*local_60;
  }
  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar9;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar9);
  }
  uVar11 = (ulonglong)dVar12;
  uVar4 = (uint)uVar11;
  do {
    if ((int)uVar4 < 1) {
LAB_1402312d9:
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      _eh_vector_destructor_iterator_(&local_108,0x10,6,FUN_140041b30);
      if (0 < (int)local_68[0]) {
        puVar8 = local_60;
        do {
          puVar1 = (undefined8 *)*puVar8;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar1);
          }
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 0;
          *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
          puVar8 = puVar8 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      FUN_140e4cd60(local_60);
      DAT_141dc7a50 = (undefined8 *)local_168;
      return param_3;
    }
    uVar13 = (undefined4)((ulonglong)pcVar15 >> 0x20);
    uVar4 = (int)uVar11 - 1;
    uVar11 = (ulonglong)uVar4;
    if (((uStack_16c != 2) || (local_178 == (undefined8 *)0x0)) ||
       (*(int *)((longlong)local_178 + 0x24) == 0)) {
      local_158 = 0xc;
      goto LAB_1402312d9;
    }
    local_158 = 0xe;
    dVar12 = (double)FUN_140e78f00((longlong)(*(int *)((longlong)local_178 + 0x24) + -1));
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    local_134 = 0;
    local_158 = 0xf;
    local_140 = dVar12;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    iVar3 = FUN_140e4a740(&local_140);
    ppuVar5 = (undefined8 **)0x0;
    if (((uStack_16c & 0xffffff) == 2) && (local_178 != (undefined8 *)0x0)) {
      if ((iVar3 < 0) || (*(int *)((longlong)local_178 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)local_178 + 0x24));
      }
      else {
        ppuVar5 = (undefined8 **)((longlong)iVar3 * 0x10 + local_178[1]);
      }
      if (ppuVar5 != &local_108) goto LAB_140231091;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      ppuVar5 = &local_178;
LAB_140231091:
      local_188 = *(undefined4 *)ppuVar5;
      uStack_184 = *(undefined4 *)((longlong)ppuVar5 + 4);
      uStack_180 = *(undefined4 *)(ppuVar5 + 1);
      uStack_17c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_188);
    }
    local_a8 = &local_108;
    local_188 = _DAT_1419e3720;
    uStack_184 = uRam00000001419e3724;
    uStack_180 = uRam00000001419e3728;
    uStack_17c = uRam00000001419e372c;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_188);
    local_a0 = (double *)local_f8;
    local_188 = _DAT_1419df7a0;
    uStack_184 = uRam00000001419df7a4;
    uStack_180 = uRam00000001419df7a8;
    uStack_17c = uRam00000001419df7ac;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_188);
    local_98 = local_e8;
    local_188 = (undefined4)DAT_1419df7b0;
    uStack_184 = DAT_1419df7b0._4_4_;
    uStack_180 = DAT_1419df7b8;
    uStack_17c = DAT_1419df7bc;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_188);
    local_188 = (undefined4)DAT_1419df7b0;
    uStack_184 = DAT_1419df7b0._4_4_;
    uStack_180 = DAT_1419df7b8;
    uStack_17c = DAT_1419df7bc;
    local_90 = local_d8;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_188);
    local_88 = local_c8;
    local_188 = _DAT_1419e3710;
    uStack_184 = uRam00000001419e3714;
    uStack_180 = uRam00000001419e3718;
    uStack_17c = uRam00000001419e371c;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_188);
    local_80 = local_b8;
    uVar17 = CONCAT44(uVar13,DAT_141a0a2e8);
    FUN_140e634e0(param_1,param_2,&local_198,6,uVar17,&local_a8);
    uVar13 = (undefined4)((ulonglong)uVar17 >> 0x20);
    local_158 = 0x11;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_a8 = &local_178;
    local_a0 = &local_140;
    local_188 = _DAT_1419e3730;
    uStack_184 = uRam00000001419e3734;
    uStack_180 = uRam00000001419e3738;
    uStack_17c = uRam00000001419e373c;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_188);
    local_98 = local_e8;
    pcVar15 = (code *)CONCAT44(uVar13,DAT_1419fd808);
    FUN_140e634e0(param_1,param_2,&local_198,3,pcVar15,&local_a8);
  } while( true );
}

