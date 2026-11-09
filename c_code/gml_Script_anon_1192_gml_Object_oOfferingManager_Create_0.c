// gml_Script_anon_1192_gml_Object_oOfferingManager_Create_0 @ 0x140b81e70

undefined8 *
gml_Script_anon_1192_gml_Object_oOfferingManager_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined4 uVar11;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  double local_188;
  uint local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  double *local_110;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8 [2];
  undefined8 local_e8 [4];
  undefined1 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_130 = "gml_Script_anon@270@gml_Object_oOfferingManager_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 8;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57cf0);
  local_14c = 0xffffff;
  local_158 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_5c = 0;
  local_68 = 0;
  local_18c = 0;
  local_198 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 10;
  puVar6 = (undefined8 *)FUN_140e8da20(&local_68,param_1,0);
  if (puVar6 != &local_168) {
    local_c8 = (undefined1 *)*puVar6;
    uStack_c0 = *(undefined4 *)(puVar6 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_c8);
  }
  local_128 = 0xb;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_188 = 0.0;
  bVar1 = true;
  do {
    uVar11 = (undefined4)((ulonglong)pcVar8 >> 0x20);
    if (!bVar1) {
      local_128 = 0xb;
      uVar3 = local_17c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_188 = (double)((longlong)local_188 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_17c = 0;
              goto LAB_140b8209d;
            }
            FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
          }
          goto LAB_140b820a7;
        }
        local_188 = (double)FUN_140e4b060(&local_188);
        local_17c = 0;
      }
LAB_140b8209d:
      local_188 = local_188 + 1.0;
    }
LAB_140b820a7:
    bVar1 = false;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if (puVar5 != local_f8) {
      local_178 = *(undefined4 *)puVar5;
      uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_178);
    }
    local_120 = local_f8;
    uVar9 = CONCAT44(uVar11,DAT_1419f5e98);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar9,&local_120);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    iVar4 = FUN_140e851f0(&local_188,uVar7,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
      local_128 = 0x19;
      if (&local_168 != param_3) {
        local_178 = (undefined4)local_168;
        uStack_174 = local_168._4_4_;
        uStack_170 = uStack_160;
        uStack_16c = uStack_15c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_178);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      _eh_vector_destructor_iterator_(local_f8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_138;
      return param_3;
    }
    local_128 = 0xd;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if (puVar5 != local_e8) {
      local_178 = *(undefined4 *)puVar5;
      uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_178);
    }
    local_118 = local_e8;
    local_110 = &local_188;
    ppuVar12 = &local_118;
    uVar10 = CONCAT44(uVar11,DAT_1419f5a78);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,2,uVar10,ppuVar12);
    if (puVar6 != &local_158) {
      local_178 = *(undefined4 *)puVar6;
      uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_178);
    }
    local_128 = 0xe;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
    cVar2 = FUN_140e491e0(puVar6);
    if (cVar2 == '\0') {
      local_128 = 0x14;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_158,DAT_1419f5d58,0x80000000,&local_98,uVar10,uVar13);
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_98,DAT_141a0a8a8,0x80000000,&local_a8,uVar10,uVar13 & 0xffffffffffffff00)
      ;
      uVar11 = (undefined4)(uVar10 >> 0x20);
      local_120 = &local_168;
      local_178 = (undefined4)local_a8;
      uStack_174 = local_a8._4_4_;
      uStack_170 = uStack_a0;
      uStack_16c = uStack_9c;
      if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_178);
      local_118 = local_e8;
      ppuVar12 = &local_120;
      uVar10 = CONCAT44(uVar11,DAT_1419fe568);
      FUN_140e634e0(param_1,param_2,&local_198,2,uVar10,ppuVar12);
      local_128 = 0x15;
      uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
      pcVar8 = (code *)(uVar10 & 0xffffffffffffff00);
      FUN_140e87440(&local_158,DAT_1419f5ea8,0x80000000,&local_108,pcVar8,uVar13);
      uStack_bc = 0;
      local_c8 = &DAT_bff0000000000000;
      iVar4 = FUN_140e851f0(&local_108,&local_c8,DAT_141955260,0);
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if (iVar4 != 0) {
        local_128 = 0x16;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        uVar13 = uVar13 & 0xffffffffffffff00;
        uVar10 = (ulonglong)pcVar8 & 0xffffffffffffff00;
        FUN_140e87440(&local_158,DAT_1419f5ea8,0x80000000,&local_108,uVar10,uVar13);
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_108,DAT_141a0a8a8,0x80000000,&local_b8,uVar10,
                      uVar13 & 0xffffffffffffff00);
        uVar11 = (undefined4)(uVar10 >> 0x20);
        local_120 = &local_168;
        local_178 = (undefined4)local_b8;
        uStack_174 = local_b8._4_4_;
        uStack_170 = uStack_b0;
        uStack_16c = uStack_ac;
        if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_178);
        local_118 = local_e8;
        pcVar8 = (code *)CONCAT44(uVar11,DAT_1419fe568);
        FUN_140e634e0(param_1,param_2,&local_198,2,pcVar8,&local_120);
      }
    }
    else {
      local_128 = 0x10;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_158,DAT_1419f5ca8,0x80000000,&local_78,uVar10,uVar13);
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_78,DAT_141a0a8a8,0x80000000,&local_88,uVar10,uVar13 & 0xffffffffffffff00)
      ;
      uVar11 = (undefined4)(uVar10 >> 0x20);
      local_120 = &local_168;
      local_178 = (undefined4)local_88;
      uStack_174 = local_88._4_4_;
      uStack_170 = uStack_80;
      uStack_16c = uStack_7c;
      if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_178);
      local_118 = local_e8;
      pcVar8 = (code *)CONCAT44(uVar11,DAT_1419fe568);
      FUN_140e634e0(param_1,param_2,&local_198,2,pcVar8,&local_120);
    }
  } while( true );
}

