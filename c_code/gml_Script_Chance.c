// gml_Script_Chance @ 0x14025ce00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_Chance(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 *puVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar13;
  undefined8 uVar10;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  ulonglong uVar14;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b4;
  longlong *local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  double local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  double local_170;
  undefined4 local_164;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118 [2];
  double local_108 [2];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  double *local_98;
  double *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 local_70 [16];
  longlong local_60;
  
  local_1d0 = "gml_Script_CancelPull";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 1;
  uVar13 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_138,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_164 = 0xffffff;
  local_170 = 0.0;
  local_174 = 0xffffff;
  local_180 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_184 = 0xffffff;
  local_190 = 0.0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 3;
  uStack_1dc = 0xf;
  local_1e8 = (longlong *)0x10000000000001b;
  local_158 = 0x1b;
  uStack_154 = 0x1000000;
  uStack_150 = uStack_1e0;
  uStack_14c = 0xf;
  if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_158);
  uVar10 = CONCAT44(uVar13,DAT_141a02ef8);
  local_a8 = local_138;
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar10,&local_a8);
  uVar13 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_1c8 = 3;
  }
  else {
    local_1c8 = 5;
    uStack_1dc = 0xf;
    local_1e8 = (longlong *)0x10000000000001b;
    local_158 = 0x1b;
    uStack_154 = 0x1000000;
    uStack_150 = uStack_1e0;
    uStack_14c = 0xf;
    if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_158);
    local_a8 = local_138;
    FUN_140edd0e0(local_res8,local_res10,1,&local_a8);
    local_1c8 = 7;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uStack_1dc = 0xf;
    local_1e8 = (longlong *)0x100000000000019;
    local_158 = 0x19;
    uStack_154 = 0x1000000;
    uStack_150 = uStack_1e0;
    uStack_14c = 0xf;
    if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_158);
    ppuVar11 = (undefined1 **)CONCAT44(uVar13,DAT_141a02ef8);
    local_a8 = local_138;
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,ppuVar11,&local_a8);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_1c8 = 7;
    }
    else {
      local_1c8 = 9;
      local_1a4 = 0xf;
      local_1b0 = (longlong *)0x100000000000019;
      iVar2 = FUN_140e63cb0(local_70,&local_res8,&local_res10,&local_1b0);
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      if (0 < iVar2) {
        do {
          uVar13 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
          local_1c8 = 0xb;
          pdVar4 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
          pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
          if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
            dVar8 = *pdVar5;
          }
          else {
            dVar8 = (double)FUN_140e4b060(pdVar5);
          }
          if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
            dVar9 = *pdVar4;
          }
          else {
            dVar9 = (double)FUN_140e4b060(pdVar4);
          }
          fVar7 = (float)FUN_140e793d0(0,0,(float)dVar9,(float)dVar8);
          if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_170);
          }
          local_164 = 0;
          local_170 = (double)fVar7;
          local_1c8 = 0xc;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_1f8 = 0;
          local_1f0 = 0;
          local_1ec = 5;
          local_208 = _DAT_141dc6360;
          uStack_204 = uRam0000000141dc6364;
          uStack_200 = uRam0000000141dc6368;
          uStack_1fc = uRam0000000141dc636c;
          if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_208);
          local_208 = _DAT_141dc6360;
          uStack_204 = uRam0000000141dc6364;
          uStack_200 = uRam0000000141dc6368;
          uStack_1fc = uRam0000000141dc636c;
          local_a8 = local_138;
          if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_208);
          local_a0 = local_128;
          if (pdVar4 != local_118) {
            local_208 = *(undefined4 *)pdVar4;
            uStack_204 = *(undefined4 *)((longlong)pdVar4 + 4);
            uStack_200 = *(undefined4 *)(pdVar4 + 1);
            uStack_1fc = *(undefined4 *)((longlong)pdVar4 + 0xc);
            if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_118);
            }
            FUN_140041b80(local_118,&local_208);
          }
          local_98 = local_118;
          if (pdVar5 != local_108) {
            local_208 = *(undefined4 *)pdVar5;
            uStack_204 = *(undefined4 *)((longlong)pdVar5 + 4);
            uStack_200 = *(undefined4 *)(pdVar5 + 1);
            uStack_1fc = *(undefined4 *)((longlong)pdVar5 + 0xc);
            if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_108);
            }
            FUN_140041b80(local_108,&local_208);
          }
          local_90 = local_108;
          ppuVar11 = &local_a8;
          uVar12 = CONCAT44(uVar13,DAT_1419fd548);
          puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1f8,4,uVar12,ppuVar11);
          if (puVar6 != &local_180) {
            local_208 = *(undefined4 *)puVar6;
            uStack_204 = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_200 = *(undefined4 *)(puVar6 + 1);
            uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_180);
            }
            FUN_140041b80(&local_180,&local_208);
          }
          local_1c8 = 0xd;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_1f8 = 0;
          local_1f0 = 0;
          local_1ec = 5;
          local_1a4 = 6;
          local_1b0 = local_res8;
          uVar14 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(&local_1b0,DAT_1419fe0e8,0x80000000,&local_b8,uVar12,uVar14);
          if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b0);
          }
          uStack_1dc = 6;
          local_1e8 = local_res8;
          FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_c8,uVar12 & 0xffffffffffffff00,
                        uVar14 & 0xffffffffffffff00);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_208 = (undefined4)local_b8;
          uStack_204 = local_b8._4_4_;
          uStack_200 = uStack_b0;
          uStack_1fc = uStack_ac;
          if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_208);
          local_208 = (undefined4)local_c8;
          uStack_204 = local_c8._4_4_;
          uStack_200 = uStack_c0;
          uStack_1fc = uStack_bc;
          local_a8 = local_138;
          if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_208);
          local_a0 = local_128;
          local_98 = &local_170;
          local_90 = (double *)&local_180;
          local_208 = _DAT_1419e38c0;
          uStack_204 = uRam00000001419e38c4;
          uStack_200 = uRam00000001419e38c8;
          uStack_1fc = uRam00000001419e38cc;
          if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_208);
          local_88 = local_f8;
          local_208 = (undefined4)DAT_1419df7b0;
          uStack_204 = DAT_1419df7b0._4_4_;
          uStack_200 = DAT_1419df7b8;
          uStack_1fc = DAT_1419df7bc;
          if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_208);
          local_80 = local_e8;
          local_208 = (undefined4)DAT_1419df7b0;
          uStack_204 = DAT_1419df7b0._4_4_;
          uStack_200 = DAT_1419df7b8;
          uStack_1fc = DAT_1419df7bc;
          if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_208);
          local_78 = local_d8;
          ppuVar11 = &local_a8;
          puVar6 = (undefined8 *)
                   gml_Script_get_blood_col(local_res8,local_res10,&local_1f8,7,ppuVar11);
          if (puVar6 != &local_1c0) {
            local_208 = *(undefined4 *)puVar6;
            uStack_204 = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_200 = *(undefined4 *)(puVar6 + 1);
            uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c0);
            }
            FUN_140041b80(&local_1c0,&local_208);
          }
          local_1c8 = 0xe;
          if (pdVar4 != &local_190) {
            local_208 = *(undefined4 *)pdVar4;
            uStack_204 = *(undefined4 *)((longlong)pdVar4 + 4);
            uStack_200 = *(undefined4 *)(pdVar4 + 1);
            uStack_1fc = *(undefined4 *)((longlong)pdVar4 + 0xc);
            if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_190);
            }
            FUN_140041b80(&local_190,&local_208);
          }
          (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
          FUN_140e87930(&local_1c0,DAT_141a1f230,0x80000000,&local_190);
          local_1c8 = 0xf;
          if (puVar6 != &local_1a0) {
            local_208 = *(undefined4 *)puVar6;
            uStack_204 = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_200 = *(undefined4 *)(puVar6 + 1);
            uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a0);
            }
            FUN_140041b80(&local_1a0,&local_208);
          }
          (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
          FUN_140e87930(&local_1c0,DAT_141a1f500,0x80000000,&local_1a0);
          local_1c8 = 0x10;
          local_158 = 0;
          uStack_154 = 0x3ff00000;
          uStack_14c = 0xd;
          local_208 = 0;
          uStack_204 = 0x3ff00000;
          uStack_200 = uStack_150;
          uStack_1fc = 0xd;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_208);
          FUN_140e87930(&local_1c0,DAT_141a56af0,0x80000000,&local_148);
          local_1c8 = 0x12;
          FUN_140edd0e0(local_res8,local_res10,0,0);
          cVar1 = FUN_140e643f0(local_70,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_70,&local_res8,&local_res10);
      if (local_60 != 0) {
        FUN_140e4cd60();
        local_60 = 0;
      }
    }
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}

