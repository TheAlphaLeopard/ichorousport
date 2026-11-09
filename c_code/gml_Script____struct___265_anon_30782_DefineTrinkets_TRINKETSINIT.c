// gml_Script____struct___265_anon_30782_DefineTrinkets_TRINKETSINIT @ 0x140609380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___265_anon_30782_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 *local_res18 [2];
  code *pcVar14;
  undefined4 **ppuVar15;
  double local_168;
  uint local_15c;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined4 local_110 [4];
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_120 = "gml_Script_anon@30351@anon@30265@DefineTrinkets@TRINKETSINIT";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x457;
  pcVar14 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_110,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_13c = 0;
  local_148 = 0;
  local_f4 = 0;
  local_100 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x458;
  local_12c = 0xf;
  local_138 = 0x1000000000000ff;
  iVar4 = FUN_140e63cb0(local_98,&local_res8,&local_res10,&local_138);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (0 < iVar4) {
    do {
      local_118 = 0x459;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_14c = 0;
      local_158 = 0.0;
      bVar1 = true;
LAB_140609512:
      if (!bVar1) {
        local_118 = 0x459;
        uVar5 = local_14c & 0xffffff;
        if (uVar5 != 0) {
          if (uVar5 != 1) {
            if (uVar5 == 7) {
              local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + 1);
            }
            else if (uVar5 == 10) {
              local_158 = (double)((longlong)local_158 + 1);
            }
            else {
              if (uVar5 == 0xd) {
                local_14c = 0;
                goto LAB_14060956c;
              }
              FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
            }
            goto LAB_140609577;
          }
          local_158 = (double)FUN_140e4b060(&local_158);
          local_14c = 0;
        }
LAB_14060956c:
        local_158 = local_158 + 1.0;
      }
LAB_140609577:
      bVar1 = false;
      uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b70);
      iVar4 = FUN_140e851f0(&local_158,uVar8,DAT_141955260,1);
      if ((iVar4 != -2) && (iVar4 < 0)) {
        local_118 = 0x45a;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_15c = 0;
        local_168 = 0.0;
        bVar2 = true;
        do {
          if (!bVar2) {
            local_118 = 0x45a;
            uVar5 = local_15c & 0xffffff;
            if (uVar5 != 0) {
              if (uVar5 != 1) {
                if (uVar5 == 7) {
                  local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
                }
                else if (uVar5 == 10) {
                  local_168 = (double)((longlong)local_168 + 1);
                }
                else {
                  if (uVar5 == 0xd) {
                    local_15c = 0;
                    goto LAB_140609675;
                  }
                  FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
                }
                goto LAB_140609680;
              }
              local_168 = (double)FUN_140e4b060(&local_168);
              local_15c = 0;
            }
LAB_140609675:
            local_168 = local_168 + 1.0;
          }
LAB_140609680:
          bVar2 = false;
          uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b70);
          iVar4 = FUN_140e851f0(&local_168,uVar8,DAT_141955260,1);
          uVar7 = (undefined4)((ulonglong)pcVar14 >> 0x20);
          if ((iVar4 == -2) || (-1 < iVar4)) goto LAB_140609512;
          local_118 = 0x45b;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          local_148 = 0;
          local_140 = 0;
          local_13c = 5;
          if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_100);
          }
          local_100 = 0;
          local_f8 = 0;
          local_f4 = 5;
          uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b10);
          dVar12 = local_168;
          if ((local_15c & 0xffffff) != 0) {
            dVar12 = (double)FUN_140e4b060(&local_168);
          }
          dVar13 = local_158;
          if ((local_14c & 0xffffff) != 0) {
            dVar13 = (double)FUN_140e4b060(&local_158);
          }
          uVar6 = FUN_140e4a740(uVar8);
          puVar9 = (undefined4 *)FUN_140ea8b20(&local_100,uVar6,(longlong)dVar13,(longlong)dVar12);
          if (puVar9 != local_110) {
            local_c8 = *puVar9;
            uStack_c4 = puVar9[1];
            uStack_c0 = puVar9[2];
            uStack_bc = puVar9[3];
            if ((1 << ((byte)local_110[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_110);
            }
            FUN_140041b80(local_110,&local_c8);
          }
          local_res18[0] = local_110;
          ppuVar15 = local_res18;
          pcVar14 = (code *)CONCAT44(uVar7,DAT_1419fcb88);
          uVar10 = FUN_140e634e0(local_res8,local_res10,&local_148,1,pcVar14,ppuVar15);
          cVar3 = FUN_140e491e0(uVar10);
          if (cVar3 == '\0') {
            local_118 = 0x45b;
          }
          else {
            local_118 = 0x45c;
            if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            local_148 = 0;
            local_140 = 0;
            local_13c = 5;
            dVar12 = local_168;
            if ((local_15c & 0xffffff) != 0) {
              dVar12 = (double)FUN_140e4b060(&local_168);
            }
            dVar13 = local_158;
            if ((local_14c & 0xffffff) != 0) {
              dVar13 = (double)FUN_140e4b060(&local_158);
            }
            uVar7 = FUN_140e4a740(uVar8);
            puVar11 = (undefined8 *)
                      FUN_140ea8b20(&local_148,uVar7,(longlong)dVar13,(longlong)dVar12);
            if (puVar11 != &local_f0) {
              local_c8 = *(undefined4 *)puVar11;
              uStack_c4 = *(undefined4 *)((longlong)puVar11 + 4);
              uStack_c0 = *(undefined4 *)(puVar11 + 1);
              uStack_bc = *(undefined4 *)((longlong)puVar11 + 0xc);
              if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_f0);
              }
              FUN_140041b80(&local_f0,&local_c8);
            }
            local_118 = 0x45d;
            (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b10);
            pcVar14 = (code *)((ulonglong)pcVar14 & 0xffffffffffffff00);
            FUN_140e87440(&local_f0,DAT_141a57c50,0x80000000,&local_b8,pcVar14,
                          (ulonglong)ppuVar15 & 0xffffffffffffff00);
            local_12c = DAT_141dd4be4;
            local_130 = DAT_141dd4be0;
            if ((1 << ((byte)DAT_141dd4be4 & 0x1f) & 0x46U) == 0) {
              local_138 = DAT_141dd4bd8;
            }
            else {
              FUN_1400419b0(&local_138,&DAT_141dd4bd8);
            }
            iVar4 = FUN_140e851f0(&local_b8,&local_138,DAT_141955260,0);
            if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            if (iVar4 == 0) {
              local_118 = 0x45e;
              if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_148);
              }
              local_148 = 0;
              local_140 = 0;
              local_13c = 5;
              local_c8 = _DAT_1419e6b30;
              uStack_c4 = uRam00000001419e6b34;
              uStack_c0 = uRam00000001419e6b38;
              uStack_bc = uRam00000001419e6b3c;
              if ((1 << ((byte)local_110[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_110);
              }
              FUN_140041b80(local_110,&local_c8);
              local_res18[0] = local_110;
              pcVar14 = (code *)local_res18;
              uVar8 = gml_Script_choose_weighted(local_res8,local_res10,&local_148,1,pcVar14);
              cVar3 = FUN_140e491e0(uVar8);
              if (cVar3 != '\0') {
                local_118 = 0x45e;
                local_a8 = 0;
                uStack_a4 = 0x3ff00000;
                uStack_9c = 0xd;
                local_c8 = 0;
                uStack_c4 = 0x3ff00000;
                uStack_c0 = uStack_a0;
                uStack_bc = 0xd;
                if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_e0);
                }
                FUN_140041b80(&local_e0,&local_c8);
                FUN_140e87930(&local_f0,DAT_1419ffa38,0x80000000,&local_e0);
              }
            }
            else {
              local_118 = 0x45d;
            }
          }
        } while( true );
      }
      cVar3 = FUN_140e643f0(local_98,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_98,&local_res8,&local_res10);
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_110,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

