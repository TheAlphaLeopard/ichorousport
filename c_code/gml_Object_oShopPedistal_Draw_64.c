// gml_Object_oShopPedistal_Draw_64 @ 0x140d71690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oShopPedistal_Draw_64(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined1 **ppuVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_res18 = 0;
  local_80 = "gml_Object_oShopPedistal_Step_2";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_78 = 2;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56c20);
  uVar8 = 0;
  uVar4 = FUN_140e63610(local_res8,local_res10,&local_70,0,uVar4,0);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_f8 = CONCAT44(uRam00000001419edcc4,_DAT_1419edcc0);
    uStack_f0 = uRam00000001419edcc8;
    uStack_ec = uRam00000001419edccc;
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_f8);
    local_40 = local_60;
    local_f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_f0 = DAT_1419df7b8;
    uStack_ec = DAT_1419df7bc;
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_f8);
    local_38 = local_50;
    ppuVar6 = &local_40;
    uVar4 = gml_Script_InputPressedMany(local_res8,local_res10,&local_d8,2,ppuVar6);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
      local_ac = 0xf;
      local_b8 = 0x100000000000106;
      uVar8 = uVar8 & 0xffffffffffffff00;
      uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_b8,DAT_1419f5998,0x80000000,&local_98,uVar7,uVar8);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140e87440(uVar4,DAT_141a0a918,0x80000000,&local_c8,uVar7 & 0xffffffffffffff00,
                    uVar8 & 0xffffffffffffff00);
      local_ac = local_bc;
      local_b0 = local_c0;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
        local_b8 = local_c8;
      }
      else {
        FUN_1400419b0(&local_b8,&local_c8);
      }
      local_res18 = 1;
      uStack_ec = 7;
      local_f8 = CONCAT44(local_f8._4_4_,1);
      FUN_1400460e0(&local_b8,&local_f8);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      uVar2 = FUN_140e851f0(&local_98,&local_b8,DAT_141955260,1);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if (uVar2 < 0x80000000) {
        local_78 = 4;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_e8 = 0;
        local_e0 = 0;
        local_dc = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56ba0);
        FUN_140e63610(local_res8,local_res10,&local_e8,0,uVar4,0);
        local_78 = 6;
        uStack_ec = 0xf;
        local_f8 = 0x1000000000000d6;
        iVar3 = FUN_140e63cb0(&local_b8,&local_res8,&local_res10,&local_f8);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if (0 < iVar3) {
          do {
            local_78 = 7;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56bc0);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            *puVar5 = 0x4024000000000000;
            cVar1 = FUN_140e643f0(&local_b8,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(&local_b8,&local_res8,&local_res10);
        if (local_a8 != 0) {
          FUN_140e4cd60();
        }
      }
    }
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

