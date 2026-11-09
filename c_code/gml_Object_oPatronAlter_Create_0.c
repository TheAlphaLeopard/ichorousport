// gml_Object_oPatronAlter_Create_0 @ 0x140bc68f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oPatronAlter_Create_0(undefined8 **param_1,ulonglong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar22;
  undefined8 **local_res8;
  ulonglong local_res10;
  ulonglong uVar30;
  undefined4 uVar31;
  undefined4 uVar33;
  ulonglong uVar32;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  double local_278;
  uint local_26c;
  undefined1 *local_268;
  undefined4 local_25c;
  undefined8 local_258;
  char *local_250;
  undefined4 local_248;
  undefined1 *local_240;
  undefined4 local_234;
  undefined8 *local_230;
  char *pcStack_228;
  undefined4 local_220;
  undefined8 local_218;
  uint local_20c;
  longlong local_208;
  undefined4 local_1fc;
  undefined1 *local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  uint local_1bc;
  double local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198 [2];
  undefined1 *local_188 [2];
  undefined1 local_178 [16];
  double local_168;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined4 local_14c;
  undefined8 **local_148;
  undefined4 local_13c;
  undefined8 **local_138;
  undefined4 local_12c;
  undefined8 **local_128;
  undefined4 local_11c;
  undefined8 **local_118;
  undefined4 local_10c;
  undefined8 *local_108;
  undefined1 **local_100;
  undefined1 *local_f8;
  undefined1 local_f0 [16];
  longlong local_e0;
  
  local_250 = "gml_Object_oParticleManager_Draw_0";
  local_248 = 0;
  local_258 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_258;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_198,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar7 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  local_25c = 0xffffff;
  local_268 = (undefined1 *)0x0;
  local_234 = 0xffffff;
  local_240 = (undefined1 *)0x0;
  local_26c = 0xffffff;
  local_278 = 0.0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_248 = 2;
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    local_248 = 3;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_25c = 0;
    local_268 = &DAT_bff0000000000000;
    local_248 = 4;
    if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_240);
    }
    local_234 = 0;
    local_240 = &DAT_bff0000000000000;
    local_248 = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_26c = 0;
    local_278 = 0.0;
    bVar2 = true;
LAB_140bc6af3:
    if (!bVar2) {
      local_248 = 5;
      uVar4 = local_26c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_278 = (double)CONCAT44(local_278._4_4_,local_278._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_278 = (double)((longlong)local_278 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_26c = 0;
              goto LAB_140bc6b4d;
            }
            FUN_140042910(&DAT_14172c3d8,&local_278,&local_278);
          }
          goto LAB_140bc6b58;
        }
        local_278 = (double)FUN_140e4b060(&local_278);
        local_26c = 0;
      }
LAB_140bc6b4d:
      local_278 = local_278 + 1.0;
    }
LAB_140bc6b58:
    bVar2 = false;
    plVar8 = (longlong *)(*(code *)(*local_res8)[1])(local_res8,DAT_1419f6f28);
    iVar5 = 0;
    if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
      iVar5 = *(int *)(*plVar8 + 0x24);
    }
    local_15c = 0;
    local_168 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_278,&local_168,DAT_141955260,1);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (iVar5 != -2 && iVar5 < 0) {
      local_248 = 8;
      plVar8 = (longlong *)(*(code *)(*local_res8)[1])(local_res8,DAT_1419f6f28);
      iVar5 = FUN_140e4a740(&local_278);
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar8 != &local_208) {
        local_230 = (undefined8 *)*plVar8;
        pcStack_228 = (char *)plVar8[1];
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140041b80(&local_208,&local_230);
      }
      local_248 = 10;
      ppuVar14 = local_res8;
      uVar32 = local_res10;
      FUN_140e87170(&local_208,DAT_1419f61d8,0x80000000,&local_1a8,local_res8,local_res10);
      cVar3 = FUN_140e491e0(&local_1a8);
      if (cVar3 == '\0') {
        local_248 = 10;
      }
      else {
        local_248 = 0xc;
        iVar5 = FUN_140e63cb0(local_f0,&local_res8,&local_res10,&local_208);
        if (0 < iVar5) {
          do {
            local_248 = 0xe;
            uVar7 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a578b0);
            local_14c = 0;
            local_158 = &DAT_bff0000000000000;
            iVar5 = FUN_140e851f0(uVar7,&local_158,DAT_141955260,0);
            if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            if (iVar5 == 0) {
              local_248 = 0x1a;
              local_1ec = 0;
              local_1f8 = &DAT_bff0000000000000;
              iVar5 = FUN_140e851f0(&local_268,&local_1f8,DAT_141955260,0);
              if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
              if (iVar5 != 0) {
                local_248 = 0x1c;
                if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_288);
                }
                local_280 = 0;
                pcStack_228 = "gml_Script_pal_swap_reset";
                local_230 = DAT_141dc7a50;
                DAT_141dc7a50 = &local_230;
                local_27c = 5;
                local_288 = 0;
                local_220 = 0x71;
                iVar5 = FUN_140ec9d80();
                if (iVar5 != -1) {
                  local_220 = 0x71;
                  FUN_140ec9dc0();
                }
                DAT_141dc7a50 = (undefined8 **)local_230;
                local_248 = 0x1d;
                if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_268);
                }
                local_25c = 0;
                local_268 = &DAT_bff0000000000000;
                local_248 = 0x1e;
                if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_240);
                }
                local_234 = 0;
                local_240 = &DAT_bff0000000000000;
              }
              local_248 = 0x20;
              if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              local_288 = 0;
              local_280 = 0;
              local_27c = 5;
              ppuVar14 = (undefined8 **)(*(code *)(*local_res8)[1])(local_res8,DAT_141a05028);
              uVar32 = 0;
              FUN_140e63610(local_res8,local_res10,&local_288,0,ppuVar14,0);
            }
            else {
              local_248 = 0x10;
              uVar7 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a578b0);
              iVar5 = FUN_140e851f0(uVar7,&local_268,DAT_141955260,0);
              if (iVar5 == 0) {
                uVar7 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a57820);
                iVar5 = FUN_140e851f0(uVar7,&local_240,DAT_141955260,0);
                if (iVar5 != 0) goto LAB_140bc6e09;
              }
              else {
LAB_140bc6e09:
                local_248 = 0x12;
                if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_288);
                }
                local_288 = 0;
                local_280 = 0;
                local_27c = 5;
                puVar9 = (undefined8 *)(*(code *)(*local_res8)[1])(local_res8,DAT_141a578b0);
                ppuVar10 = (undefined1 **)(*(code *)(*local_res8)[1])(local_res8,DAT_141a57820);
                if (puVar9 != local_198) {
                  local_230 = (undefined8 *)*puVar9;
                  pcStack_228 = (char *)puVar9[1];
                  if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_198);
                  }
                  FUN_140041b80(local_198,&local_230);
                }
                local_108 = local_198;
                if (ppuVar10 != local_188) {
                  local_230 = (undefined8 *)*ppuVar10;
                  pcStack_228 = ppuVar10[1];
                  if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_188);
                  }
                  FUN_140041b80(local_188,&local_230);
                }
                local_100 = local_188;
                local_230 = _DAT_1419df7a0;
                pcStack_228 = pcRam00000001419df7a8;
                if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_178);
                }
                FUN_140041b80(local_178,&local_230);
                local_f8 = local_178;
                ppuVar14 = &local_108;
                gml_Script_pal_swap_layer_init(local_res8,local_res10,&local_288,3,ppuVar14);
                local_248 = 0x13;
                ppuVar11 = (undefined1 **)(*(code *)(*local_res8)[1])(local_res8,DAT_141a578b0);
                if (ppuVar11 != &local_268) {
                  local_230 = (undefined8 *)*ppuVar11;
                  pcStack_228 = ppuVar11[1];
                  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_268);
                  }
                  FUN_140041b80(&local_268,&local_230);
                }
                local_248 = 0x14;
                if (ppuVar10 != &local_240) {
                  local_230 = (undefined8 *)*ppuVar10;
                  pcStack_228 = ppuVar10[1];
                  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_240);
                  }
                  FUN_140041b80(&local_240,&local_230);
                }
              }
              local_248 = 0x16;
              uVar7 = (*(code *)(*local_res8)[1])(local_res8,DAT_141a05568);
              puVar9 = (undefined8 *)(*(code *)(*local_res8)[1])(local_res8,DAT_141a0a7f8);
              uVar12 = (*(code *)(*local_res8)[1])(local_res8,DAT_1419f5b78);
              puVar13 = (undefined8 *)(*(code *)(*local_res8)[1])(local_res8,DAT_141a57840);
              local_13c = 6;
              local_148 = local_res8;
              uVar32 = uVar32 & 0xffffffffffffff00;
              uVar30 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
              FUN_140e87440(&local_148,DAT_141a0a728,0x80000000,&local_1b8,uVar30,uVar32);
              if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_148);
              }
              local_12c = 6;
              local_138 = local_res8;
              uVar32 = uVar32 & 0xffffffffffffff00;
              uVar30 = uVar30 & 0xffffffffffffff00;
              FUN_140e87440(&local_138,DAT_141a0cfc8,0x80000000,&local_1c8,uVar30,uVar32);
              if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_138);
              }
              local_11c = 6;
              local_128 = local_res8;
              uVar32 = uVar32 & 0xffffffffffffff00;
              uVar30 = uVar30 & 0xffffffffffffff00;
              FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_1d8,uVar30,uVar32);
              if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_128);
              }
              local_10c = 6;
              local_118 = local_res8;
              uVar32 = uVar32 & 0xffffffffffffff00;
              uVar30 = uVar30 & 0xffffffffffffff00;
              FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_1e8,uVar30,uVar32);
              if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_118);
              }
              uVar32 = uVar32 & 0xffffffffffffff00;
              uVar30 = uVar30 & 0xffffffffffffff00;
              FUN_140e87440(uVar7,DAT_1419f3418,0x80000000,&local_218,uVar30,uVar32);
              uVar31 = (undefined4)(uVar30 >> 0x20);
              uVar33 = (undefined4)(uVar32 >> 0x20);
              if ((*(uint *)((longlong)puVar13 + 0xc) & 0xffffff) == 0) {
                uVar15 = (undefined4)*puVar13;
                uVar23 = (undefined4)((ulonglong)*puVar13 >> 0x20);
              }
              else {
                uVar7 = FUN_140e4b060(puVar13);
                uVar15 = (undefined4)uVar7;
                uVar23 = (undefined4)((ulonglong)uVar7 >> 0x20);
              }
              uVar6 = FUN_140e4a8b0(uVar12);
              if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
                uVar16 = (undefined4)*puVar9;
                uVar24 = (undefined4)((ulonglong)*puVar9 >> 0x20);
              }
              else {
                uVar7 = FUN_140e4b060(puVar9);
                uVar16 = (undefined4)uVar7;
                uVar24 = (undefined4)((ulonglong)uVar7 >> 0x20);
              }
              if ((local_20c & 0xffffff) == 0) {
                uVar18 = (undefined4)local_218;
                uVar26 = (undefined4)((ulonglong)local_218 >> 0x20);
                uVar17 = uVar18;
                uVar25 = uVar26;
              }
              else {
                uVar7 = FUN_140e4b060(&local_218);
                uVar17 = (undefined4)uVar7;
                uVar25 = (undefined4)((ulonglong)uVar7 >> 0x20);
                uVar18 = (undefined4)local_218;
                uVar26 = (undefined4)((ulonglong)local_218 >> 0x20);
              }
              if ((local_20c & 0xffffff) != 0) {
                uVar7 = FUN_140e4b060(&local_218);
                uVar18 = (undefined4)uVar7;
                uVar26 = (undefined4)((ulonglong)uVar7 >> 0x20);
              }
              if ((local_1dc & 0xffffff) == 0) {
                uVar19 = (undefined4)local_1e8;
                uVar27 = (undefined4)((ulonglong)local_1e8 >> 0x20);
              }
              else {
                uVar7 = FUN_140e4b060(&local_1e8);
                uVar19 = (undefined4)uVar7;
                uVar27 = (undefined4)((ulonglong)uVar7 >> 0x20);
              }
              if ((local_1cc & 0xffffff) == 0) {
                uVar20 = (undefined4)local_1d8;
                uVar28 = (undefined4)((ulonglong)local_1d8 >> 0x20);
              }
              else {
                uVar7 = FUN_140e4b060(&local_1d8);
                uVar20 = (undefined4)uVar7;
                uVar28 = (undefined4)((ulonglong)uVar7 >> 0x20);
              }
              if ((local_1bc & 0xffffff) == 0) {
                uVar21 = (undefined4)local_1c8;
                uVar29 = (undefined4)((ulonglong)local_1c8 >> 0x20);
              }
              else {
                uVar7 = FUN_140e4b060(&local_1c8);
                uVar21 = (undefined4)uVar7;
                uVar29 = (undefined4)((ulonglong)uVar7 >> 0x20);
              }
              if ((local_1ac & 0xffffff) == 0) {
                dVar22 = local_1b8;
              }
              else {
                dVar22 = (double)FUN_140e4b060(&local_1b8);
              }
              uVar32 = CONCAT44(uVar33,(float)(double)CONCAT44(uVar26,uVar18));
              ppuVar14 = (undefined8 **)CONCAT44(uVar31,(float)(double)CONCAT44(uVar27,uVar19));
              FUN_140ec5dd0(local_res8,(longlong)dVar22,(float)(double)CONCAT44(uVar29,uVar21),
                            (float)(double)CONCAT44(uVar28,uVar20),ppuVar14,uVar32,
                            (float)(double)CONCAT44(uVar25,uVar17),
                            (float)(double)CONCAT44(uVar24,uVar16),uVar6,
                            (float)(double)CONCAT44(uVar23,uVar15));
            }
            cVar3 = FUN_140e643f0(local_f0,&local_res8,&local_res10);
          } while (cVar3 != '\0');
        }
        FUN_140e63970(local_f0,&local_res8,&local_res10);
        if (local_e0 != 0) {
          FUN_140e4cd60();
        }
      }
      goto LAB_140bc6af3;
    }
    local_248 = 0x25;
    local_1ec = 0;
    local_1f8 = &DAT_bff0000000000000;
    iVar5 = FUN_140e851f0(&local_268,&local_1f8,DAT_141955260,0);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (iVar5 != 0) {
      local_248 = 0x26;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_280 = 0;
      pcStack_228 = "gml_Script_pal_swap_reset";
      local_230 = DAT_141dc7a50;
      DAT_141dc7a50 = &local_230;
      local_27c = 5;
      local_288 = 0;
      local_220 = 0x71;
      iVar5 = FUN_140ec9d80();
      if (iVar5 != -1) {
        local_220 = 0x71;
        FUN_140ec9dc0();
      }
      DAT_141dc7a50 = (undefined8 **)local_230;
    }
  }
  else {
    local_248 = 2;
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  _eh_vector_destructor_iterator_(local_198,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 **)local_258;
  return;
}

