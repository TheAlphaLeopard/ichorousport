// gml_Object_oDripZone_Create_0 @ 0x14091dae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDripZone_Create_0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  float fVar8;
  double dVar9;
  longlong *local_res8;
  ulonglong local_res10;
  undefined4 local_res18;
  undefined4 uVar13;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 **ppuVar14;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  double local_1f0;
  uint local_1e4;
  ulonglong local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  ulonglong local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_res18 = 0;
  local_210 = "gml_Object_oDischarge_Step_0";
  local_208 = 0;
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  uVar13 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0.0;
  bVar6 = 0xff;
  uStack_13c = 0xffffff;
  local_148 = 0.0;
  bVar7 = 0xff;
  uStack_14c = 0xffffff;
  local_158 = 0.0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_208 = 2;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
  if (puVar4 != &local_f8) {
    local_228 = *puVar4;
    uStack_220 = *(undefined4 *)(puVar4 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_228);
  }
  local_b8 = &local_f8;
  ppuVar14 = &local_b8;
  uVar10 = CONCAT44(uVar13,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_200,1,uVar10,ppuVar14);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_208 = 4;
    FUN_140edd0e0(local_res8,local_res10,0,0);
    local_208 = 5;
  }
  else {
    local_208 = 9;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    uVar12 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419ff338,0x80000000,&local_108,uVar10,uVar12);
    FUN_140e87440(&local_108,DAT_141a57430,0x80000000,&local_118,uVar10 & 0xffffffffffffff00,
                  uVar12 & 0xffffffffffffff00);
    cVar1 = FUN_140e491e0(&local_118);
    if (cVar1 == '\0') {
      local_208 = 0x10;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
      FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_128,local_res8,local_res10);
      local_228 = local_128;
      uStack_220 = uStack_120;
      uStack_21c = uStack_11c;
      if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_180);
      }
      FUN_140041b80(&local_180,&local_228);
      FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_180);
      local_208 = 0x11;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
      plVar11 = local_res8;
      uVar10 = local_res10;
      FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_138,local_res8,local_res10);
      local_228 = local_138;
      uStack_220 = uStack_130;
      uStack_21c = uStack_12c;
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_190);
      }
      FUN_140041b80(&local_190,&local_228);
      FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_190);
      local_208 = 0x13;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
      uStack_22c = 0;
      local_238 = 0x4028000000000000;
      uVar2 = FUN_140e851f0(uVar5,&local_238,DAT_141955260,1);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if (uVar2 < 0x80000000) {
        local_208 = 0x15;
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        local_200 = 0;
        local_1f8 = 0;
        local_1f4 = 5;
        uStack_22c = 6;
        local_238 = local_res10;
        uVar10 = uVar10 & 0xffffffffffffff00;
        uVar12 = (ulonglong)plVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_1d0,uVar12,uVar10);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        uStack_22c = 6;
        local_238 = local_res10;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_238,DAT_141a0a788,0x80000000,&local_1e0,uVar12,
                      uVar10 & 0xffffffffffffff00);
        uVar13 = (undefined4)(uVar12 >> 0x20);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        uVar5 = FUN_140e794b0(0,0x4014000000000000);
        uStack_22c = local_1c4;
        uStack_230 = local_1c8;
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) == 0) {
          local_238 = local_1d0;
        }
        else {
          FUN_1400419b0(&local_238,&local_1d0);
        }
        local_res18 = 1;
        FUN_140162c50(&local_238,uVar5);
        local_228 = local_238;
        uStack_220 = uStack_230;
        uStack_21c = uStack_22c;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_228);
        local_res18 = 0;
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_b8 = &local_f8;
        uVar5 = FUN_140e794b0(0,0);
        uStack_22c = local_1d4;
        uStack_230 = local_1d8;
        if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) == 0) {
          local_238 = local_1e0;
        }
        else {
          FUN_1400419b0(&local_238,&local_1e0);
        }
        local_res18 = 2;
        FUN_140162c50(&local_238,uVar5);
        local_228 = local_238;
        uStack_220 = uStack_230;
        uStack_21c = uStack_22c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_228);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_b0 = local_e8;
        local_228 = CONCAT44(uRam0000000141dd856c,_DAT_141dd8568);
        uStack_220 = uRam0000000141dd8570;
        uStack_21c = DAT_141dd8574;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_228);
        local_a8 = local_d8;
        uStack_22c = 0xf;
        local_238 = 0x10000000000012d;
        local_228 = 0x10000000000012d;
        uStack_220 = uStack_230;
        uStack_21c = 0xf;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_228);
        local_a0 = local_c8;
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_200,4,CONCAT44(uVar13,DAT_141a0a7c8),
                              &local_b8);
        iVar3 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar5);
        if (0 < iVar3) {
          do {
            local_208 = 0x17;
            dVar9 = (double)FUN_140e794b0(0,0x406c200000000000);
            if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f0);
            }
            local_1e4 = 0;
            local_208 = 0x18;
            local_1f0 = dVar9;
            fVar8 = (float)FUN_140e78f90(0x3dcccccd,(float)dVar9);
            if ((1 << (bVar6 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            bVar6 = 0;
            uStack_13c = 0;
            local_148 = (double)fVar8;
            local_208 = 0x19;
            dVar9 = local_1f0;
            if ((local_1e4 & 0xffffff) != 0) {
              dVar9 = (double)FUN_140e4b060(&local_1f0);
            }
            fVar8 = (float)FUN_140e79010(0x3dcccccd,(float)dVar9);
            if ((1 << (bVar7 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            bVar7 = 0;
            uStack_14c = 0;
            local_158 = (double)fVar8;
            local_208 = 0x1b;
            uStack_21c = 0xf;
            local_228 = 0x1000001000002f4;
            local_168 = 0x2f4;
            uStack_164 = 0x1000001;
            uStack_160 = uStack_220;
            uStack_15c = 0xf;
            if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a0);
            }
            FUN_140041b80(&local_1a0,&local_168);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1a0);
            local_208 = 0x1d;
            local_168 = (undefined4)local_148;
            uStack_164 = local_148._4_4_;
            uStack_160 = uStack_140;
            uStack_15c = uStack_13c;
            if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b0);
            }
            FUN_140041b80(&local_1b0,&local_168);
            FUN_140e86fa0(local_res8,DAT_1419fdd68,0x80000000,&local_1b0);
            local_208 = 0x1e;
            local_168 = (undefined4)local_158;
            uStack_164 = local_158._4_4_;
            uStack_160 = uStack_150;
            uStack_15c = uStack_14c;
            if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c0);
            }
            FUN_140041b80(&local_1c0,&local_168);
            FUN_140e86fa0(local_res8,DAT_1419fdde8,0x80000000,&local_1c0);
            local_208 = 0x20;
            puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a968);
            FUN_140e609c0(local_res8);
            FUN_140e645a0(&local_238,gml_Object_oDripZone_Step_0,local_res8);
            if (&local_238 != puVar4) {
              local_168 = (undefined4)local_238;
              uStack_164 = local_238._4_4_;
              uStack_160 = uStack_230;
              uStack_15c = uStack_22c;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar4);
              }
              FUN_140041b80(puVar4,&local_168);
            }
            if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            FUN_140e60910(1);
            cVar1 = FUN_140e643f0(local_98,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_98,&local_res8,&local_res10);
        local_208 = 0x2c;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = 0;
        if (local_88 != 0) {
          FUN_140e4cd60();
        }
      }
    }
    else {
      local_208 = 0xb;
      FUN_140edd0e0(local_res8,local_res10,0,0);
      local_208 = 0xc;
    }
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << (bVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << (bVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return;
}

