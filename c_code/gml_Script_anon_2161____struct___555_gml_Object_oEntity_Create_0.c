// gml_Script_anon_2161____struct___555_gml_Object_oEntity_Create_0 @ 0x140aa8dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2161____struct___555_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  byte bVar10;
  undefined4 uVar11;
  float fVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  ulonglong uVar14;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  uint local_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined4 local_178 [3];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  double local_108;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_190 = "gml_Script_anon@1235@___struct___555@gml_Object_oEntity_Create_0";
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  local_188 = 0x54;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_178,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef568);
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  bVar10 = 0xff;
  uStack_7c = 0xffffff;
  local_88 = 0.0;
  bVar9 = 0xff;
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_188 = 0x57;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  uStack_1cc = 0;
  local_1d8 = 0;
  iVar2 = FUN_140e851f0(uVar4,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar2 < 1) {
    local_188 = 0x7b;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f2978);
    uStack_1cc = 0;
    local_1d8 = 0;
    iVar2 = FUN_140e851f0(uVar3,&local_1d8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if (iVar2 != 0) goto LAB_140aa9922;
    local_188 = 0x7c;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    puVar7 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1dce0);
    uVar11 = DAT_141a1dce0;
  }
  else {
    local_188 = 0x59;
    puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
    if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
      uVar11 = (undefined4)*puVar5;
    }
    else {
      uVar11 = FUN_140e4b060(puVar5);
    }
    dVar13 = (double)FUN_1412a79b0(uVar11,0x4024000000000000);
    if (dVar13 == 0.0) {
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5878);
      uVar14 = 0;
      uVar4 = FUN_140e63610(local_res8,local_res10,&local_1c8,0,uVar6,0);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07d18);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 != '\0') {
          cVar1 = FUN_140e491e0(uVar3);
          if (cVar1 == '\0') {
            local_188 = 0x5b;
            dVar13 = (double)FUN_140e794b0(0,0x406c200000000000);
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            local_19c = 0;
            local_188 = 0x5c;
            local_1a8 = dVar13;
            fVar12 = (float)FUN_140e78f90(0x41000000,(float)dVar13);
            if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f8);
            }
            local_ec = 0;
            local_f8 = (double)fVar12;
            local_188 = 0x5d;
            dVar13 = local_1a8;
            if ((local_19c & 0xffffff) != 0) {
              dVar13 = (double)FUN_140e4b060(&local_1a8);
            }
            fVar12 = (float)FUN_140e79010(0x41000000,(float)dVar13);
            if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_108);
            }
            local_fc = 0;
            local_108 = (double)fVar12;
            local_188 = 0x5e;
            if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            local_1c8 = 0;
            local_1c0 = 0;
            local_1bc = 5;
            uStack_1cc = 6;
            local_1d8 = local_res10;
            uVar14 = uVar14 & 0xffffffffffffff00;
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_118,uVar6,uVar14);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            uStack_1cc = 6;
            local_1d8 = local_res10;
            uVar6 = uVar6 & 0xffffffffffffff00;
            FUN_140e87440(&local_1d8,DAT_141a0a788,0x80000000,&local_128,uVar6,
                          uVar14 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar6 >> 0x20);
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            uStack_1cc = local_10c;
            uStack_1d0 = local_110;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
              local_1d8 = local_118;
            }
            else {
              FUN_1400419b0(&local_1d8,&local_118);
            }
            local_res18 = 1;
            FUN_1400460e0(&local_1d8,&local_f8);
            local_138 = local_1d8;
            uStack_130 = uStack_1d0;
            uStack_12c = uStack_1cc;
            if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_178);
            }
            FUN_140041b80(local_178,&local_138);
            local_res18 = 0;
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_e8 = local_178;
            uStack_1cc = local_11c;
            uStack_1d0 = local_120;
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
              local_1d8 = local_128;
            }
            else {
              FUN_1400419b0(&local_1d8,&local_128);
            }
            local_res18 = 2;
            FUN_1400460e0(&local_1d8,&local_108);
            local_138 = local_1d8;
            uStack_130 = uStack_1d0;
            uStack_12c = uStack_1cc;
            if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_168);
            }
            FUN_140041b80(local_168,&local_138);
            local_res18 = 0;
            if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_e0 = local_168;
            local_138 = CONCAT44(uRam0000000141dd91dc,_DAT_141dd91d8);
            uStack_130 = uRam0000000141dd91e0;
            uStack_12c = DAT_141dd91e4;
            if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_158);
            }
            FUN_140041b80(local_158,&local_138);
            local_d8 = local_158;
            uStack_1cc = 0xf;
            local_1d8 = 0x10000000000012d;
            local_138 = 0x10000000000012d;
            uStack_130 = uStack_1d0;
            uStack_12c = 0xf;
            if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_148);
            }
            FUN_140041b80(local_148,&local_138);
            local_d0 = local_148;
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_1c8,4,CONCAT44(uVar11,DAT_141a0a7c8)
                                  ,&local_e8);
            iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar3);
            if (0 < iVar2) {
              do {
                local_188 = 0x60;
                dVar13 = local_1a8;
                if ((local_19c & 0xffffff) != 0) {
                  dVar13 = (double)FUN_140e4b060(&local_1a8);
                }
                fVar12 = (float)FUN_140e78f90(0x3f400000,(float)dVar13);
                if ((1 << (bVar10 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_88);
                }
                bVar10 = 0;
                uStack_7c = 0;
                local_88 = (double)fVar12;
                local_188 = 0x61;
                dVar13 = local_1a8;
                if ((local_19c & 0xffffff) != 0) {
                  dVar13 = (double)FUN_140e4b060(&local_1a8);
                }
                fVar12 = (float)FUN_140e79010(0x3f400000,(float)dVar13);
                if ((1 << (bVar9 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_98);
                }
                bVar9 = 0;
                uStack_8c = 0;
                local_98 = (double)fVar12;
                local_188 = 99;
                uStack_12c = 0xf;
                local_138 = 0x1000001000002f4;
                local_1b8 = 0x2f4;
                uStack_1b4 = 0x1000001;
                uStack_1b0 = uStack_130;
                uStack_1ac = 0xf;
                if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_a8);
                }
                FUN_140041b80(&local_a8,&local_1b8);
                FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_a8);
                local_188 = 0x65;
                local_1b8 = (undefined4)local_88;
                uStack_1b4 = local_88._4_4_;
                uStack_1b0 = uStack_80;
                uStack_1ac = uStack_7c;
                if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_b8);
                }
                FUN_140041b80(&local_b8,&local_1b8);
                FUN_140e86fa0(local_res8,DAT_1419fdd68,0x80000000,&local_b8);
                local_188 = 0x66;
                local_1b8 = (undefined4)local_98;
                uStack_1b4 = local_98._4_4_;
                uStack_1b0 = uStack_90;
                uStack_1ac = uStack_8c;
                if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_c8);
                }
                FUN_140041b80(&local_c8,&local_1b8);
                FUN_140e86fa0(local_res8,DAT_1419fdde8,0x80000000,&local_c8);
                local_188 = 0x68;
                puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a968);
                FUN_140e609c0(local_res8);
                FUN_140e645a0(&local_1d8,&LAB_140aa8d90,local_res8);
                if (&local_1d8 != puVar5) {
                  local_1b8 = (undefined4)local_1d8;
                  uStack_1b4 = local_1d8._4_4_;
                  uStack_1b0 = uStack_1d0;
                  uStack_1ac = uStack_1cc;
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar5);
                  }
                  FUN_140041b80(puVar5,&local_1b8);
                }
                if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1d8);
                }
                FUN_140e60910(1);
                cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
              } while (cVar1 != '\0');
            }
            FUN_140e63970(local_78,&local_res8,&local_res10);
            if (local_68 != 0) {
              FUN_140e4cd60();
            }
          }
        }
      }
    }
    local_188 = 0x77;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    puVar7 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
    uVar11 = DAT_141a0a848;
  }
  puVar8 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,uVar11);
  if (puVar7 != local_178) {
    local_1b8 = *puVar7;
    uStack_1b4 = puVar7[1];
    uStack_1b0 = puVar7[2];
    uStack_1ac = puVar7[3];
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1b8);
  }
  local_e8 = local_178;
  local_1b8 = _DAT_141dc6ff0;
  uStack_1b4 = uRam0000000141dc6ff4;
  uStack_1b0 = uRam0000000141dc6ff8;
  uStack_1ac = uRam0000000141dc6ffc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1b8);
  local_e0 = local_168;
  local_1b8 = _DAT_1419eb3b0;
  uStack_1b4 = uRam00000001419eb3b4;
  uStack_1b0 = uRam00000001419eb3b8;
  uStack_1ac = uRam00000001419eb3bc;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1b8);
  local_d8 = local_158;
  FUN_140e609c0(local_res8);
  puVar7 = (undefined4 *)gml_Script_arc(local_res8,local_res10,&local_1c8,3,&local_e8);
  if (puVar7 != puVar8) {
    local_1b8 = *puVar7;
    uStack_1b4 = puVar7[1];
    uStack_1b0 = puVar7[2];
    uStack_1ac = puVar7[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_1b8);
  }
  FUN_140e60910(1);
LAB_140aa9922:
  local_188 = 0x80;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f2818);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_188 = 0x81;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f2978);
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f2788);
    puVar7 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f2978);
    uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_1d0 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
      local_1d8 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_1d8,puVar5);
    }
    local_res18 = 4;
    FUN_1400460e0(&local_1d8,uVar3);
    local_1b8 = (undefined4)local_1d8;
    uStack_1b4 = local_1d8._4_4_;
    uStack_1b0 = uStack_1d0;
    uStack_1ac = uStack_1cc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1b8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_e8 = local_178;
    local_1b8 = _DAT_141dc6ff0;
    uStack_1b4 = uRam0000000141dc6ff4;
    uStack_1b0 = uRam0000000141dc6ff8;
    uStack_1ac = uRam0000000141dc6ffc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1b8);
    local_e0 = local_168;
    local_1b8 = _DAT_1419eb380;
    uStack_1b4 = uRam00000001419eb384;
    uStack_1b0 = uRam00000001419eb388;
    uStack_1ac = uRam00000001419eb38c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1b8);
    local_d8 = local_158;
    FUN_140e609c0(local_res8);
    puVar8 = (undefined4 *)
             gml_RoomCC_rmGravePit01_0_Create(local_res8,local_res10,&local_1c8,3,&local_e8);
    if (puVar8 != puVar7) {
      local_1b8 = *puVar8;
      uStack_1b4 = puVar8[1];
      uStack_1b0 = puVar8[2];
      uStack_1ac = puVar8[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_1b8);
    }
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << (bVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << (bVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(local_178,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return param_3;
}

