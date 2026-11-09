// gml_Object_oBurnUpEffect_Create_0 @ 0x140867380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBurnUpEffect_Create_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  double *pdVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar14;
  double dVar12;
  double dVar13;
  ulonglong uVar15;
  undefined4 **ppuVar16;
  ulonglong uVar17;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  longlong *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined1 local_a8 [16];
  undefined4 local_98 [4];
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *local_58;
  double *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  
  local_f0 = "gml_Object_oBuffProjectile_Step_0";
  local_e8 = 0;
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0.0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_e8 = 2;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a878);
  if (puVar5 != local_c8) {
    local_118 = *puVar5;
    uStack_114 = puVar5[1];
    uStack_110 = puVar5[2];
    uStack_10c = puVar5[3];
    if ((1 << ((byte)_local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_118);
  }
  local_58 = local_c8;
  puVar7 = (undefined8 *)CONCAT44(uVar10,DAT_1419f58d8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,puVar7,&local_58);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 != '\0') {
    local_e8 = 4;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
    FUN_140e63610(param_1,param_2,&local_108,0,puVar7,0);
  }
  local_e8 = 8;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  uVar10 = 0;
  uVar14 = 0;
  local_138 = 0.0;
  bVar1 = true;
  do {
    dVar12 = (double)CONCAT44(uVar14,uVar10);
    uVar10 = (undefined4)((ulonglong)puVar7 >> 0x20);
    if (!bVar1) {
      local_e8 = 8;
      uVar3 = local_12c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_1408675d6;
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
          goto LAB_1408675e5;
        }
        dVar12 = (double)FUN_140e4b060(&local_138);
LAB_1408675d6:
        local_12c = 0;
      }
      local_138 = dVar12 + 1.0;
    }
LAB_1408675e5:
    bVar1 = false;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a878);
    if (puVar5 != local_c8) {
      local_118 = *puVar5;
      uStack_114 = puVar5[1];
      uStack_110 = puVar5[2];
      uStack_10c = puVar5[3];
      if ((1 << ((byte)_local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_118);
    }
    local_58 = local_c8;
    ppuVar16 = &local_58;
    uVar15 = CONCAT44(uVar10,DAT_1419f5e98);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar15,ppuVar16);
    iVar4 = FUN_140e851f0(&local_138,uVar6,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
LAB_14086793b:
      local_e8 = 0x12;
      pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
      pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
      local_11c = 6;
      uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      local_128 = param_1;
      FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_78,uVar15,uVar17);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar9;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar9);
      }
      if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
        dVar13 = *pdVar8;
      }
      else {
        dVar13 = (double)FUN_140e4b060(pdVar8);
      }
      fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
      FUN_140162c50(&local_78,(double)fVar11);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_78);
      local_e8 = 0x13;
      local_11c = 6;
      uVar15 = uVar15 & 0xffffffffffffff00;
      local_128 = param_1;
      FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_88,uVar15,uVar17 & 0xffffffffffffff00
                   );
      uVar10 = (undefined4)(uVar15 >> 0x20);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar9;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar9);
      }
      if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
        dVar13 = *pdVar8;
      }
      else {
        dVar13 = (double)FUN_140e4b060(pdVar8);
      }
      fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
      FUN_140162c50(&local_88,(double)fVar11);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_88);
      local_e8 = 0x15;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
      FUN_140046040(uVar6);
      local_e8 = 0x17;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
      local_118 = _DAT_141dc6ae0;
      uStack_114 = uRam0000000141dc6ae4;
      uStack_110 = uRam0000000141dc6ae8;
      uStack_10c = uRam0000000141dc6aec;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_118);
      local_58 = local_c8;
      puVar7 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar10,DAT_141a0a0d8),&local_58);
      local_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
      local_120 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
        local_128 = (longlong *)*puVar7;
      }
      else {
        FUN_1400419b0(&local_128,puVar7);
      }
      uStack_10c = 7;
      local_118 = 0xf;
      FUN_140042560(&local_128,&local_118);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      uVar3 = FUN_140e851f0(uVar6,&local_128,DAT_141955260,1);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if (uVar3 < 0x80000000) {
        local_e8 = 0x18;
        (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
        (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
        FUN_140edd0e0(param_1,param_2,0,0);
      }
      local_e8 = 0x1a;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fde08);
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 != '\0') {
        local_e8 = 0x1c;
        FUN_140edd0e0(param_1,param_2,0,0);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_f8;
      return;
    }
    local_e8 = 10;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fde08);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') goto LAB_14086793b;
    local_e8 = 0xd;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a878);
    local_11c = 6;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_141a0a828,0x80000000,&local_68,uVar15,
                  (ulonglong)ppuVar16 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar15 >> 0x20);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (puVar5 != local_c8) {
      local_118 = *puVar5;
      uStack_114 = puVar5[1];
      uStack_110 = puVar5[2];
      uStack_10c = puVar5[3];
      if ((1 << ((byte)_local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_118);
    }
    local_58 = local_c8;
    local_50 = &local_138;
    local_118 = (undefined4)local_68;
    uStack_114 = local_68._4_4_;
    uStack_110 = uStack_60;
    uStack_10c = uStack_5c;
    if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
    local_48 = local_a8;
    uVar6 = CONCAT44(uVar10,DAT_1419f5a78);
    puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_108,2,uVar6,&local_58);
    uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar5 != local_98) {
      local_118 = *puVar5;
      uStack_114 = puVar5[1];
      uStack_110 = puVar5[2];
      uStack_10c = puVar5[3];
      if ((1 << ((byte)local_98[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_118);
    }
    local_40 = local_98;
    puVar7 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_148,2,CONCAT44(uVar10,DAT_1419fed78),&local_48);
    if (puVar7 != &local_e0) {
      local_118 = *(undefined4 *)puVar7;
      uStack_114 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_110 = *(undefined4 *)(puVar7 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_118);
    }
    local_e8 = 0xe;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    puVar7 = &local_e0;
    FUN_140e63610(param_1,param_2,&local_148,0,puVar7,0);
    uVar10 = SUB84(local_138,0);
    uVar14 = (undefined4)((ulonglong)local_138 >> 0x20);
  } while( true );
}

