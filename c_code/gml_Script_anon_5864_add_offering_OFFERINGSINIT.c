// gml_Script_anon_5864_add_offering_OFFERINGSINIT @ 0x1403c5200

longlong *
gml_Script_anon_5864_add_offering_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  double dVar9;
  uint uVar11;
  code *pcVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 **ppuVar15;
  ulonglong uVar16;
  double local_168;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90 [4];
  undefined4 local_80 [8];
  undefined4 *local_60;
  undefined4 *local_58;
  double *local_50;
  
  local_120 = "gml_Script_omission_active";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0xc4;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_15c = 0xffffff;
  local_168 = 0.0;
  puVar5 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57cf0);
  local_13c = 0xffffff;
  local_148 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_14c = 0;
  local_158 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0xc5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  uVar8 = 0;
  uVar10 = 0;
  local_168 = 0.0;
  bVar1 = true;
  uVar11 = 0x3ff00000;
  do {
    dVar9 = (double)CONCAT44(uVar10,uVar8);
    uVar8 = (undefined4)((ulonglong)pcVar12 >> 0x20);
    if (!bVar1) {
      local_118 = 0xc5;
      uVar3 = local_15c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_168 = (double)((longlong)local_168 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_1403c53a8;
            FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
          }
          goto LAB_1403c53b6;
        }
        dVar9 = (double)FUN_140e4b060(&local_168);
LAB_1403c53a8:
        local_15c = 0;
      }
      local_168 = dVar9 + 1.0;
    }
LAB_1403c53b6:
    bVar1 = false;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if (puVar5 != local_90) {
      local_a0 = *puVar5;
      uStack_9c = puVar5[1];
      uStack_98 = puVar5[2];
      uStack_94 = puVar5[3];
      if ((1 << ((byte)local_90[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_90);
      }
      FUN_140041b80(local_90,&local_a0);
    }
    local_60 = local_90;
    uVar13 = CONCAT44(uVar8,DAT_1419f5e98);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar13,&local_60);
    uVar8 = (undefined4)((ulonglong)uVar13 >> 0x20);
    iVar4 = FUN_140e851f0(&local_168,uVar6,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
      local_118 = 0xcb;
      uVar11 = 0;
      goto LAB_1403c57db;
    }
    local_118 = 199;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if (puVar5 != local_80) {
      local_a0 = *puVar5;
      uStack_9c = puVar5[1];
      uStack_98 = puVar5[2];
      uStack_94 = puVar5[3];
      if ((1 << ((byte)local_80[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_a0);
    }
    local_58 = local_80;
    local_50 = &local_168;
    ppuVar15 = &local_58;
    uVar16 = CONCAT44(uVar8,DAT_1419f5a78);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar16,ppuVar15);
    if (puVar7 != &local_148) {
      local_a0 = *(undefined4 *)puVar7;
      uStack_9c = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_98 = *(undefined4 *)(puVar7 + 1);
      uStack_94 = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_a0);
    }
    local_118 = 200;
    uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_148,DAT_1419f5d58,0x80000000,&local_b0,uVar16,uVar14);
    uVar14 = uVar14 & 0xffffffffffffff00;
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_b0,DAT_141a0a8a8,0x80000000,&local_c0,uVar16,uVar14);
    local_104 = DAT_141dd28c4;
    local_108 = DAT_141dd28c0;
    if ((1 << ((byte)DAT_141dd28c4 & 0x1f) & 0x46U) == 0) {
      local_110 = DAT_141dd28b8;
    }
    else {
      FUN_1400419b0(&local_110,&DAT_141dd28b8);
    }
    iVar4 = FUN_140e851f0(&local_c0,&local_110,DAT_141955260,0);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    if (iVar4 == 0) {
      local_118 = 200;
      goto LAB_1403c57db;
    }
    local_118 = 0xc9;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    FUN_140e87440(&local_148,DAT_1419f6048,0x80000000,&local_d0,uVar16 & 0xffffffffffffff00,
                  uVar14 & 0xffffffffffffff00);
    switch(local_13c) {
    default:
switchD_1403c567f_caseD_1:
      uVar6 = 0;
      break;
    case 6:
      uVar6 = local_148;
      break;
    case 0xf:
      iVar4 = (int)((ulonglong)local_148 >> 0x20);
      if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1403c567f_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar8 = FUN_140e4a8b0(&local_148);
      uVar6 = FUN_140e87250(uVar8);
    }
    uVar16 = 0;
    pcVar12 = (code *)&local_d0;
    uVar6 = FUN_140e63610(uVar6,param_2,&local_158,0,pcVar12,0);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') {
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar14 = (ulonglong)pcVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_148,DAT_1419f5ea8,0x80000000,&local_e0,uVar14,uVar16);
      pcVar12 = (code *)(uVar14 & 0xffffffffffffff00);
      FUN_140e87440(&local_e0,DAT_141a0a8a8,0x80000000,&local_f0,pcVar12,uVar16 & 0xffffffffffffff00
                   );
      local_f4 = DAT_141dd28c4;
      local_f8 = DAT_141dd28c0;
      if ((1 << ((byte)DAT_141dd28c4 & 0x1f) & 0x46U) == 0) {
        local_100 = DAT_141dd28b8;
      }
      else {
        FUN_1400419b0(&local_100,&DAT_141dd28b8);
      }
      iVar4 = FUN_140e851f0(&local_f0,&local_100,DAT_141955260,0);
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      if (iVar4 == 0) {
        local_118 = 0xc9;
LAB_1403c57db:
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        *param_3 = (ulonglong)uVar11 << 0x20;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f0);
        }
        if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e0);
        }
        if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b0);
        }
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
        DAT_141dc7a50 = (undefined8 *)local_128;
        return param_3;
      }
    }
    uVar8 = SUB84(local_168,0);
    uVar10 = (undefined4)((ulonglong)local_168 >> 0x20);
  } while( true );
}

