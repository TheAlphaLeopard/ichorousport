// gml_Object_oPatronTendril_Step_0 @ 0x140bc8980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oPatronTendril_Step_0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong **pplVar6;
  byte bVar7;
  undefined4 uVar8;
  longlong *local_res8;
  ulonglong local_res10;
  undefined4 local_res18;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  longlong *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_1e0 = "gml_Object_oPatronAlter_Step_2";
  local_1d8 = 0;
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  uVar8 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_188,0x10,9,FUN_1400424d0,FUN_140041b30);
  bVar7 = 0xff;
  uStack_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = (longlong *)0x0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1d8 = 1;
  FUN_140e98b30(local_res8,local_res10);
  local_1d8 = 3;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c10);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f7038);
    cVar2 = FUN_140e491e0(uVar4);
    if (cVar2 == '\0') {
      local_1d8 = 5;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      uStack_23c = 0xf;
      local_248 = (longlong *)0x10000000000007e;
      local_1b8 = (longlong *)0x10000000000007e;
      uStack_1b0 = uStack_240;
      uStack_1ac = 0xf;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_1b8);
      local_c8 = local_188;
      ppuVar12 = &local_c8;
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_228,1,CONCAT44(uVar8,DAT_141a02ef8),
                            ppuVar12);
      cVar2 = FUN_140e491e0(uVar4);
      if (cVar2 == '\0') {
        local_1d8 = 7;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_248 = (longlong *)CONCAT44(uRam0000000141dc73c4,_DAT_141dc73c0);
        uStack_240 = uRam0000000141dc73c8;
        uStack_23c = uRam0000000141dc73cc;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_248);
        local_248 = (longlong *)CONCAT44(uRam00000001419ec8d4,_DAT_1419ec8d0);
        uStack_240 = uRam00000001419ec8d8;
        uStack_23c = uRam00000001419ec8dc;
        local_c0 = local_178;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_248);
        local_b8 = local_168;
        local_248 = (longlong *)CONCAT44(uRam00000001419ec8a4,_DAT_1419ec8a0);
        uStack_240 = uRam00000001419ec8a8;
        uStack_23c = uRam00000001419ec8ac;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_248);
        local_b0 = local_158;
        local_248 = (longlong *)CONCAT44(uRam00000001419ec8b4,_DAT_1419ec8b0);
        uStack_240 = uRam00000001419ec8b8;
        uStack_23c = uRam00000001419ec8bc;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_248);
        local_a8 = local_148;
        local_248 = (longlong *)CONCAT44(uRam00000001419ec8c4,_DAT_1419ec8c0);
        uStack_240 = uRam00000001419ec8c8;
        uStack_23c = uRam00000001419ec8cc;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_248);
        local_a0 = local_138;
        local_248 = (longlong *)CONCAT44(uRam00000001419ec8d4,_DAT_1419ec8d0);
        uStack_240 = uRam00000001419ec8d8;
        uStack_23c = uRam00000001419ec8dc;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_248);
        local_98 = local_128;
        puVar5 = (undefined8 *)
                 gml_GlobalScript_collision_line_width
                           (local_res8,local_res10,&local_208,6,&local_c0);
        if (puVar5 != &local_118) {
          local_248 = (longlong *)*puVar5;
          uStack_240 = *(undefined4 *)(puVar5 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_248);
        }
        local_90 = &local_118;
        local_248 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_240 = DAT_1419df7b8;
        uStack_23c = DAT_1419df7bc;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_248);
        local_88 = local_108;
        ppuVar9 = &local_90;
        pplVar6 = (longlong **)
                  gml_Script_anon_5077_DefineTrinkets_TRINKETSINIT
                            (local_res8,local_res10,&local_1f8,2,ppuVar9);
        uVar8 = 0xffffff;
        if (pplVar6 != &local_198) {
          local_248 = *pplVar6;
          uStack_240 = *(undefined4 *)(pplVar6 + 1);
          uStack_23c = *(undefined4 *)((longlong)pplVar6 + 0xc);
          FUN_140041b80(&local_198,&local_248);
          uVar8 = uStack_18c;
        }
        bVar7 = (byte)uVar8;
        local_1d8 = 9;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uStack_22c = 6;
        local_238 = local_res8;
        uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
        uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_1a8,uVar10,uVar13);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        uStack_22c = 6;
        local_238 = local_res8;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_f8,uVar10,
                      uVar13 & 0xffffffffffffff00);
        uVar8 = (undefined4)(uVar10 >> 0x20);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_248 = (longlong *)local_1a8;
        uStack_240 = uStack_1a0;
        uStack_23c = uStack_19c;
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        FUN_140041b80(local_188,&local_248);
        local_c8 = local_188;
        local_248 = (longlong *)local_f8;
        uStack_240 = uStack_f0;
        uStack_23c = uStack_ec;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_248);
        local_248 = (longlong *)CONCAT44(uRam0000000141dda26c,_DAT_141dda268);
        uStack_240 = uRam0000000141dda270;
        uStack_23c = DAT_141dda274;
        local_c0 = local_178;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_248);
        local_b8 = local_168;
        uStack_23c = 0xf;
        local_248 = (longlong *)0x10000000000013b;
        local_1b8 = (longlong *)0x10000000000013b;
        uStack_1b0 = uStack_240;
        uStack_1ac = 0xf;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_1b8);
        local_b0 = local_158;
        uVar4 = FUN_140e634e0(local_res8,local_res10,&local_228,4,CONCAT44(uVar8,DAT_141a0a7c8),
                              &local_c8);
        iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar4);
        plVar1 = local_198;
        if (0 < iVar3) {
          uVar4 = CONCAT44(uStack_18c,uStack_190);
          do {
            local_1d8 = 0xb;
            pplVar6 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57b30);
            FUN_140e609c0(local_res8);
            if (&local_198 != pplVar6) {
              local_e8 = plVar1;
              uStack_e0 = uVar4;
              if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pplVar6);
              }
              FUN_140041b80(pplVar6,&local_e8);
            }
            FUN_140e60910(1);
            local_1d8 = 0xc;
            pplVar6 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
            local_cc = 0xf;
            local_d8 = 0x1000000000000ee;
            plVar11 = local_res8;
            uVar10 = local_res10;
            FUN_140e87170(&local_d8,DAT_1419fe0e8,0x80000000,&local_1d0,local_res8,local_res10);
            if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d8);
            }
            uStack_1ac = 6;
            local_1b8 = local_res8;
            FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_1a8,
                          (ulonglong)plVar11 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140e609c0(local_res8);
            local_20c = local_1c4;
            local_210 = local_1c8;
            if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) == 0) {
              local_218 = local_1d0;
            }
            else {
              FUN_1400419b0(&local_218,&local_1d0);
            }
            local_res18 = 1;
            FUN_1400462a0(&local_218,&local_1a8);
            uStack_22c = local_20c;
            uStack_230 = local_210;
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) == 0) {
              local_238 = local_218;
            }
            else {
              FUN_1400419b0(&local_238,&local_218);
            }
            local_res18 = 3;
            uStack_23c = 0;
            local_248 = (longlong *)0x4048000000000000;
            FUN_140046500(&local_238,&local_248);
            if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            if (&local_238 != pplVar6) {
              local_e8 = local_238;
              uStack_e0 = CONCAT44(uStack_22c,uStack_230);
              if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pplVar6);
              }
              FUN_140041b80(pplVar6,&local_e8);
            }
            local_res18 = 1;
            if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            local_res18 = 0;
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            FUN_140e60910(1);
            local_1d8 = 0xd;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            *puVar5 = 0xbff8000000000000;
            cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
          } while (cVar2 != '\0');
        }
        FUN_140e63970(local_78,&local_res8,&local_res10);
        local_1d8 = 0xf;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f7038);
        uStack_23c = 0xd;
        local_248 = (longlong *)0x3ff0000000000000;
        if (&local_248 != puVar5) {
          local_e8 = (longlong *)0x3ff0000000000000;
          uStack_e0 = CONCAT44(0xd,uStack_240);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_e8);
        }
        if (local_68 != 0) {
          FUN_140e4cd60();
        }
      }
    }
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << (bVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(local_188,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return;
}

