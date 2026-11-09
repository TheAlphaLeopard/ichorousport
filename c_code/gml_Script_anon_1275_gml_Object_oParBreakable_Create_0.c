// gml_Script_anon_1275_gml_Object_oParBreakable_Create_0 @ 0x140b9cc60

undefined1 **
gml_Script_anon_1275_gml_Object_oParBreakable_Create_0
          (undefined8 param_1,undefined8 param_2,undefined1 **param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  double dVar7;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  uint local_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
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
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 *local_60;
  undefined1 *local_58 [6];
  
  local_f0 = "gml_Script_anon@491@gml_Object_oParBreakable_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x21;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_84 = 0;
  uVar9 = 0;
  local_90 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined1 *)0x0;
  local_e8 = 0x22;
  uStack_13c = 0xf;
  local_148 = (undefined1 *)0x1000000000000ee;
  local_128 = (undefined1 *)0x1000000000000ee;
  uStack_120 = uStack_140;
  uStack_11c = 0xf;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_128);
  local_60 = local_80;
  uVar10 = CONCAT44(uVar6,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_90,1,uVar10,&local_60);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
LAB_140b9d2a4:
    local_e8 = 0x22;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
  }
  else {
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uStack_13c = 0xf;
    local_148 = (undefined1 *)0x100000000000106;
    local_128 = (undefined1 *)0x100000000000106;
    uStack_120 = uStack_140;
    uStack_11c = 0xf;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_128);
    local_58[0] = local_70;
    ppuVar4 = local_58;
    uVar11 = CONCAT44(uVar6,DAT_141a02ef8);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar11,ppuVar4);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') goto LAB_140b9d2a4;
    local_e8 = 0x23;
    uStack_10c = 0xf;
    local_118 = (undefined1 *)0x100000000000106;
    uVar12 = (ulonglong)ppuVar4 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_118,DAT_141a57b40,0x80000000,&local_a0,uVar11,uVar12);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    cVar1 = FUN_140e491e0(&local_a0);
    if (cVar1 == '\0') {
      local_e8 = 0x25;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_12c = 0;
      uVar6 = 0;
      uVar8 = 0;
      local_138 = 0.0;
      bVar5 = true;
      do {
        dVar7 = (double)CONCAT44(uVar8,uVar6);
        if (!bVar5) {
          local_e8 = 0x25;
          uVar9 = local_12c & 0xffffff;
          if (uVar9 != 0) {
            if (uVar9 != 1) {
              if (uVar9 == 7) {
                local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
              }
              else if (uVar9 == 10) {
                local_138 = (double)((longlong)local_138 + 1);
              }
              else {
                if (uVar9 == 0xd) goto LAB_140b9cfa6;
                FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
              }
              goto LAB_140b9cfb4;
            }
            dVar7 = (double)FUN_140e4b060(&local_138);
LAB_140b9cfa6:
            local_12c = 0;
          }
          local_138 = dVar7 + 1.0;
        }
LAB_140b9cfb4:
        bVar5 = false;
        uStack_10c = 0xf;
        local_118 = (undefined1 *)0x100000000000106;
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_118,DAT_1419f56c8,0x80000000,&local_b0,uVar11,uVar12);
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        iVar2 = FUN_140e851f0(&local_138,&local_b0,DAT_141955260,1);
        if ((iVar2 == -2) || (-1 < iVar2)) {
          local_e8 = 0x28;
          uStack_13c = 0xf;
          local_148 = (undefined1 *)0x1000000000000ee;
          uVar12 = uVar12 & 0xffffffffffffff00;
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_148,DAT_141a1f090,0x80000000,&local_d0,uVar11,uVar12);
          if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          uStack_13c = 0xf;
          local_148 = (undefined1 *)0x1000000000000ee;
          FUN_140e87440(&local_148,DAT_1419f5a58,0x80000000,&local_e0,uVar11 & 0xffffffffffffff00,
                        uVar12 & 0xffffffffffffff00);
          if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          iVar2 = FUN_140e851f0(&local_d0,&local_e0,DAT_141955260,1);
          bVar5 = iVar2 == -2 || -1 < iVar2;
          if (bVar5) {
            uStack_13c = 0;
            local_148 = &DAT_bff0000000000000;
            ppuVar4 = &local_148;
          }
          else {
            uStack_11c = 0;
            local_128 = (undefined1 *)0x0;
            ppuVar4 = &local_128;
          }
          uVar8 = uStack_11c;
          uVar6 = uStack_13c;
          if (ppuVar4 != param_3) {
            local_118 = *ppuVar4;
            uStack_110 = *(undefined4 *)(ppuVar4 + 1);
            uStack_10c = *(undefined4 *)((longlong)ppuVar4 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            FUN_140041b80(param_3,&local_118);
          }
          if ((bVar5) && ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_148);
          }
          if ((iVar2 != -2 && -1 >= iVar2) && ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_128);
          }
          goto LAB_140b9d2cb;
        }
        local_e8 = 0x26;
        uStack_11c = 0xf;
        local_128 = (undefined1 *)0x100000000000106;
        uVar6 = FUN_140e4a740(&local_138);
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_128,DAT_1419f56f8,uVar6,&local_c0,uVar11,uVar12);
        if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        uStack_13c = 10;
        local_148 = (undefined1 *)0x2;
        iVar2 = FUN_140e851f0(&local_c0,&local_148,DAT_141955260,0);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        if (iVar2 == 0) goto LAB_140b9d0e5;
        uVar6 = SUB84(local_138,0);
        uVar8 = (undefined4)((ulonglong)local_138 >> 0x20);
      } while( true );
    }
    local_e8 = 0x23;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    uVar9 = 0xbff00000;
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = (undefined1 *)((ulonglong)uVar9 << 0x20);
LAB_140b9d2cb:
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
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
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
LAB_140b9d0e5:
  local_e8 = 0x26;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = (undefined1 *)0x3ff0000000000000;
  goto LAB_140b9d2cb;
}

