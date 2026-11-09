// gml_Object_oSidearmPedistal_Draw_64 @ 0x140d84ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSidearmPedistal_Draw_64(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 **ppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 local_50 [16];
  longlong local_40;
  
  local_a0 = "gml_Object_oSidearmPedistal_Step_2";
  local_98 = 0;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_98 = 2;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56c20);
  uVar7 = 0;
  uVar3 = FUN_140e63610(local_res8,local_res10,&local_90,0,uVar3,0);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_108 = CONCAT44(uRam00000001419edd74,_DAT_1419edd70);
    uStack_100 = uRam00000001419edd78;
    uStack_fc = uRam00000001419edd7c;
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_108);
    local_60 = local_80;
    local_108 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_100 = DAT_1419df7b8;
    uStack_fc = DAT_1419df7bc;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_108);
    local_58 = local_70;
    ppuVar5 = &local_60;
    uVar3 = gml_Script_InputPressedMany(local_res8,local_res10,&local_d8,2,ppuVar5);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
      uStack_fc = 0xf;
      local_108 = 0x100000000000106;
      uVar7 = uVar7 & 0xffffffffffffff00;
      uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
      FUN_140e87440(&local_108,DAT_1419f5998,0x80000000,&local_b8,uVar6,uVar7);
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140e87440(uVar3,DAT_141a0a908,0x80000000,&local_c8,uVar6 & 0xffffffffffffff00,
                    uVar7 & 0xffffffffffffff00);
      uVar3 = FUN_140069500(uVar3);
      uVar3 = FUN_140e63610(uVar3,local_res10,&local_e8,0,&local_c8,0);
      iVar2 = FUN_140e851f0(&local_b8,uVar3,DAT_141955260,1);
      if ((iVar2 != -2) && (-1 < iVar2)) {
        local_98 = 4;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_f8 = 0;
        local_f0 = 0;
        local_ec = 5;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56ba0);
        FUN_140e63610(local_res8,local_res10,&local_f8,0,uVar3,0);
        local_98 = 6;
        uStack_fc = 0xf;
        local_108 = 0x1000000000000d6;
        iVar2 = FUN_140e63cb0(local_50,&local_res8,&local_res10,&local_108);
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if (0 < iVar2) {
          do {
            local_98 = 7;
            puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56bc0);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar4);
            }
            *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
            *puVar4 = 0x4024000000000000;
            cVar1 = FUN_140e643f0(local_50,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_50,&local_res8,&local_res10);
        if (local_40 != 0) {
          FUN_140e4cd60();
        }
      }
    }
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return;
}

